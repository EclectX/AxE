/**
 * @file
 * @brief Functions related to 3D vector operations.
 * @author Krishna Vedala
 */
#include "util.h"
#include "print.h"

#define EPSILON 0x3089705f  // 1e-9

typedef struct vec_3d_
{
    uint32_t x;
    uint32_t y;
    uint32_t z;
} vec_3d;

typedef struct mat_3x3_
{
    union
    {
        uint32_t row1[3];
        vec_3d vec1;
    };
    union
    {
        uint32_t row2[3];
        vec_3d vec2;
    };
    union
    {
        uint32_t row3[3];
        vec_3d vec3;
    };
} mat_3x3;

typedef struct quaternion_
{
    union
    {
        uint32_t w;
        uint32_t q0;
    };
    union
    {
        vec_3d dual;
        struct
        {
            uint32_t q1, q2, q3;
        };
    };
} quaternion;

typedef struct euler_
{
    union
    {
        uint32_t roll;
        uint32_t bank;
    };
    union
    {
        uint32_t pitch;
        uint32_t elevation;
    };
    union
    {
        uint32_t yaw;
        uint32_t heading;
    };
} euler;

typedef struct dual_quat_
{
    quaternion real;
    quaternion dual;
} dual_quat;

vec_3d vector_sub(const vec_3d *a, const vec_3d *b)
{
    vec_3d out;
    out.x = fpsub(a->x , b->x);
    out.y = fpsub(a->y , b->y);
    out.z = fpsub(a->z , b->z);
    return out;
}

vec_3d vector_add(const vec_3d *a, const vec_3d *b)
{
    vec_3d out;
    out.x = fpadd(a->x , b->x);
    out.y = fpadd(a->y , b->y);
    out.z = fpadd(a->z , b->z);

    return out;
}

uint32_t dot_prod(const vec_3d *a, const vec_3d *b)
{
    uint32_t dot;
    dot = fpadd(
      fpadd(fpmul(a->x , b->x),fpmul(a->y , b->y)),
      fpmul(a->z , b->z));

    return dot;
}

vec_3d vector_prod(const vec_3d *a, const vec_3d *b)
{
    vec_3d out;
            
    out.x = fpsub(fpmul(a->y,b->z),fpmul(a->z,b->y));
    out.y = fpsub(fpmul(a->z,b->x),fpmul(a->x,b->z));
    out.z = fpsub(fpmul(a->x,b->y),fpmul(a->y,b->x));

    return out;
}
const char * print_vector(const vec_3d *a, char *name)
{
    static char vec_str[100];
    snPrint(vec_str, 99, "vec(%s) = (%f)i + (%f)j + (%f)k\n",PRINTVARS( name, a->x,
             a->y, a->z));
    return vec_str;
}

uint32_t vector_norm(const vec_3d *a)
{
    uint32_t n = dot_prod(a, a);
    n = fp_Sqrt(n);
    return n;
}

vec_3d unit_vec(const vec_3d *a)
{
    vec_3d n = {0};

    uint32_t norm = vector_norm(a);
    if (((fpsub(fp_Fabs(norm),EPSILON))>>31))
    {
        return n;
    }

    if (norm != 0x3f800000) 
    {
        n.x = fpdiv(a->x,norm);
        n.y = fpdiv(a->y,norm);
        n.z = fpdiv(a->z,norm);
    }
    /// ??????????????
    else{
        n.x = a->x;
        n.y = a->y;
        n.z = a->z;
    }
    return n;
}

mat_3x3 get_cross_matrix(const vec_3d *a)
{
    mat_3x3 A = {{{0x00000000, signInv(a->z) , a->y}}, {{a->z, 0x00000000, signInv(a->x)}}, {{signInv(a->y), a->x, 0x00000000}}};
    return A;
}

uint32_t get_angle(const vec_3d *a, const vec_3d *b)
{
    uint32_t alpha, cos_alpha;
    uint32_t norm_a = vector_norm(a);
    uint32_t norm_b = vector_norm(b);
    if ((fpsub(fp_Fabs(norm_a),EPSILON)>>31) || (fpsub(fp_Fabs(norm_b),EPSILON)>>31))
    {  
        return 0x7fffffff; // ??????????
    }

    cos_alpha = fpdiv( dot_prod(a, b) , fpmul(norm_a, norm_b));
    alpha = fp_Acos(cos_alpha); // improveable?
    return alpha;
}
void my_main()
{
    vec_3d a = {0x3f800000,0x40000000, 0x40400000};  // 1 2 3
    vec_3d b = {0x3f800000,0x3f800000, 0x3f800000};  // 1 1 1
    uint32_t d;
    
    Print("%s", PRINTVARS(print_vector(&a, "a")));
    Print("%s", PRINTVARS(print_vector(&b, "b")));
    
    d = vector_norm(&a);
    Print("|a| = %f\n", PRINTVARS(d));

    d = vector_norm(&b);
    Print("|b| = %f\n", PRINTVARS(d));

    d = dot_prod(&a, &b);
    Print("Dot product: %f\n", PRINTVARS(d));

    vec_3d c = vector_prod(&a, &b);
    Print("Vector product ",PRINTVARS(0));
    Print("%s", PRINTVARS(print_vector(&c, "c")));

    uint32_t alpha = get_angle(&a, &b);
    Print("The angle is %f\n", PRINTVARS(alpha));
    
    Print("All tests passed!\n",PRINTVARS(0));
}
