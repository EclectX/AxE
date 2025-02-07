#ifndef UTIL_H
#define UTIL_H

//#include <stddef.h>
#include "print.h"
// #include <Python.h>
// Define a structure to represent single-precision floating-point numbers

typedef unsigned int uint32_t;

typedef struct {
    uint32_t value;
} float32_t;

/// YR

typedef union {
    uint32_t number;
    char *str;
    char ch;
}printvar;


#define PRINTVARS(...) (printvar*[]){__VA_ARGS__}
#define SCANVARS(...) (uint32_t*[]){__VA_ARGS__}

typedef __SIZE_TYPE__ 	size_t;

#define RAND_MAX 32767
#define N 624
#define M 397
#define MATRIX_A 0x9908b0df
#define UPPER_MASK 0x80000000
#define LOWER_MASK 0x7fffffff
#define TEMPERING_MASK_B 0x9d2c5680
#define TEMPERING_MASK_C 0xefc60000
#define TEMPERING_SHIFT_U(y)  (y >> 11)
#define TEMPERING_SHIFT_S(y)  (y << 7)
#define TEMPERING_SHIFT_T(y)  (y << 15)
#define TEMPERING_SHIFT_L(y)  (y >> 18)
static int mt_initialized = 0;
static unsigned int mt[N+1];
static int mti=N+1;

struct _MFILE {
  char *fname;
  size_t data_sz;
  char *data;
  int rdptr;
};
typedef struct _MFILE MFILE;

#define _UPPER          0x1     // Upper case letter
#define _LOWER          0x2     // Lower case letter
#define _DIGIT          0x4     // Digit[0-9]
#define _SPACE          0x8     // Tab, carriage return, newline, vertical tab or form feed
#define _PUNCT          0x10    // Punctuation character
#define _CONTROL        0x20    // Control character
#define _BLANK          0x40    // Space char
#define _HEX            0x80    // Hexadecimal digit

static unsigned short _ctype[257] =
{
  0,                      // -1 EOF
  _CONTROL,               // 00 (NUL)
  _CONTROL,               // 01 (SOH)
  _CONTROL,               // 02 (STX)
  _CONTROL,               // 03 (ETX)
  _CONTROL,               // 04 (EOT)
  _CONTROL,               // 05 (ENQ)
  _CONTROL,               // 06 (ACK)
  _CONTROL,               // 07 (BEL)
  _CONTROL,               // 08 (BS)
  _SPACE+_CONTROL,        // 09 (HT)
  _SPACE+_CONTROL,        // 0A (LF)
  _SPACE+_CONTROL,        // 0B (VT)
  _SPACE+_CONTROL,        // 0C (FF)
  _SPACE+_CONTROL,        // 0D (CR)
  _CONTROL,               // 0E (SI)
  _CONTROL,               // 0F (SO)
  _CONTROL,               // 10 (DLE)
  _CONTROL,               // 11 (DC1)
  _CONTROL,               // 12 (DC2)
  _CONTROL,               // 13 (DC3)
  _CONTROL,               // 14 (DC4)
  _CONTROL,               // 15 (NAK)
  _CONTROL,               // 16 (SYN)
  _CONTROL,               // 17 (ETB)
  _CONTROL,               // 18 (CAN)
  _CONTROL,               // 19 (EM)
  _CONTROL,               // 1A (SUB)
  _CONTROL,               // 1B (ESC)
  _CONTROL,               // 1C (FS)
  _CONTROL,               // 1D (GS)
  _CONTROL,               // 1E (RS)
  _CONTROL,               // 1F (US)
  _SPACE+_BLANK,          // 20 SPACE
  _PUNCT,                 // 21 !
  _PUNCT,                 // 22 "
  _PUNCT,                 // 23 #
  _PUNCT,                 // 24 $
  _PUNCT,                 // 25 %
  _PUNCT,                 // 26 &
  _PUNCT,                 // 27 '
  _PUNCT,                 // 28 (
  _PUNCT,                 // 29 )
  _PUNCT,                 // 2A *
  _PUNCT,                 // 2B +
  _PUNCT,                 // 2C ,
  _PUNCT,                 // 2D -
  _PUNCT,                 // 2E .
  _PUNCT,                 // 2F /
  _DIGIT+_HEX,            // 30 0
  _DIGIT+_HEX,            // 31 1
  _DIGIT+_HEX,            // 32 2
  _DIGIT+_HEX,            // 33 3
  _DIGIT+_HEX,            // 34 4
  _DIGIT+_HEX,            // 35 5
  _DIGIT+_HEX,            // 36 6
  _DIGIT+_HEX,            // 37 7
  _DIGIT+_HEX,            // 38 8
  _DIGIT+_HEX,            // 39 9
  _PUNCT,                 // 3A :
  _PUNCT,                 // 3B ;
  _PUNCT,                 // 3C <
  _PUNCT,                 // 3D =
  _PUNCT,                 // 3E >
  _PUNCT,                 // 3F ?
  _PUNCT,                 // 40 @
  _UPPER+_HEX,            // 41 A
  _UPPER+_HEX,            // 42 B
  _UPPER+_HEX,            // 43 C
  _UPPER+_HEX,            // 44 D
  _UPPER+_HEX,            // 45 E
  _UPPER+_HEX,            // 46 F
  _UPPER,                 // 47 G
  _UPPER,                 // 48 H
  _UPPER,                 // 49 I
  _UPPER,                 // 4A J
  _UPPER,                 // 4B K
  _UPPER,                 // 4C L
  _UPPER,                 // 4D M
  _UPPER,                 // 4E N
  _UPPER,                 // 4F O
  _UPPER,                 // 50 P
  _UPPER,                 // 51 Q
  _UPPER,                 // 52 R
  _UPPER,                 // 53 S
  _UPPER,                 // 54 T
  _UPPER,                 // 55 U
  _UPPER,                 // 56 V
  _UPPER,                 // 57 W
  _UPPER,                 // 58 X
  _UPPER,                 // 59 Y
  _UPPER,                 // 5A Z
  _PUNCT,                 // 5B [
  _PUNCT,                 // 5C backslash 
  _PUNCT,                 // 5D ]
  _PUNCT,                 // 5E ^
  _PUNCT,                 // 5F _
  _PUNCT,                 // 60 `
  _LOWER+_HEX,            // 61 a
  _LOWER+_HEX,            // 62 b
  _LOWER+_HEX,            // 63 c
  _LOWER+_HEX,            // 64 d
  _LOWER+_HEX,            // 65 e
  _LOWER+_HEX,            // 66 f
  _LOWER,                 // 67 g
  _LOWER,                 // 68 h
  _LOWER,                 // 69 i
  _LOWER,                 // 6A j
  _LOWER,                 // 6B k
  _LOWER,                 // 6C l
  _LOWER,                 // 6D m
  _LOWER,                 // 6E n
  _LOWER,                 // 6F o
  _LOWER,                 // 70 p
  _LOWER,                 // 71 q
  _LOWER,                 // 72 r
  _LOWER,                 // 73 s
  _LOWER,                 // 74 t
  _LOWER,                 // 75 u
  _LOWER,                 // 76 v
  _LOWER,                 // 77 w
  _LOWER,                 // 78 x
  _LOWER,                 // 79 y
  _LOWER,                 // 7A z
  _PUNCT,                 // 7B {
  _PUNCT,                 // 7C |
  _PUNCT,                 // 7D }
  _PUNCT,                 // 7E ~
  _CONTROL,               // 7F (DEL)
  // and the rest are 0...
};

static unsigned short *_pctype = _ctype + 1; // pointer to table for char's

#define isalpha(c)     (_pctype[(int)(c)] & (_UPPER | _LOWER))
#define isupper(c)     (_pctype[(int)(c)] & _UPPER)
#define islower(c)     (_pctype[(int)(c)] & _LOWER)
#define isdigit(c)     (_pctype[(int)(c)] & _DIGIT)
#define isxdigit(c)    (_pctype[(int)(c)] & _HEX)
#define isspace(c)     (_pctype[(int)(c)] & _SPACE)
#define ispunct(c)     (_pctype[(int)(c)] & _PUNCT)
#define isalnum(c)     (_pctype[(int)(c)] & (_UPPER | _LOWER | _DIGIT))
#define isprint(c)     (_pctype[(int)(c)] & (_BLANK | _PUNCT | _UPPER | _LOWER | _DIGIT))
#define isgraph(c)     (_pctype[(int)(c)] & (_PUNCT | _UPPER | _LOWER | _DIGIT))
#define iscntrl(c)     (_pctype[(int)(c)] & _CONTROL)
#define isleadbyte(c)  (_pctype[(int)(unsigned char)(c)] & _LEADBYTE)

#define tolower(c)     (isupper(c) ? ((c) - 'A' + 'a') : (c))
#define toupper(c)     (islower(c) ? ((c) - 'a' + 'A') : (c))

#define NULL ((void *)0)
/// YR

#define EOF (-1)
#define MAX ( 0xFFFFFFFF )
#define MAX_HALF ( 0x7FFFFFFF )

// #define OUTPORT 0x00000000

#define FINISHED ( 0x00FFFFFC )

#define ASSERT(expr) \
    if (expr) \
        {} \
    else \
        { emb_assert(__LINE__,__FILE__,#expr); }

//~ { print_dec(__LINE__);print_str(#expr);nl(); }
//~ { print_dec(__LINE__);print_str(#expr); }
__attribute__((noinline))
int fpmul(int rs1, int rs2);


__attribute__((noinline))
int fpmul_approx(int rs1, int rs2);

__attribute__((noinline))
int fpadd(int rs1, int rs2);


__attribute__((noinline))
int fpsub(int rs1, int rs2);

__attribute__((noinline))
int amul(int rs1, int rs2);

__attribute__((noinline))
int emul(int rs1, int rs2);

__attribute__((noinline))
void checkprint_str(int rs1, int rs2);

__attribute__((noinline))
void checkprint_int(int rs1);

__attribute__((noinline))
void checkprint_float(int rs1);

__attribute__((noinline))
int fpdiv(int rs1, int rs2);

// is now done in the asm file.

void signal_fin();

void signal_kill_sim();

void display_print(int is_digit,int value,char* string);
// -----------------------------------------------------------------------------
// 
// P R I N T
// 
// -----------------------------------------------------------------------------

// TODO - add some define to supress debug output. do it here so you don't
// have to worry about it when adding new output.

// char
// -------------------------------------


// newline
// -------------------------------------


// print_assert
// -------------------------------------
void emb_assert( unsigned int line, const char *file, const char *exp );

// Helper function to extract the sign bit from a float32_t number
uint32_t extractSign(float32_t a);

// Helper function to extract the sign bit from a float32_t number
uint32_t fp_ExtractSign(uint32_t a);

// Helper function to extract the exponent bits from a float32_t 	$(CC) -march=$(ARCH) $(CFLAGS) -nostartfiles -o ./$(ARCH)_main.elf $(LINK) ../sp.S -DSTACK_POINTER=$(STACK_POINTER) ../crt0.o ../start.S $(SRC) ./main.cnumber
uint32_t extractExponent(float32_t a);

// Helper function to extract the exponent bits from a float32_t 	$(CC) -march=$(ARCH) $(CFLAGS) -nostartfiles -o ./$(ARCH)_main.elf $(LINK) ../sp.S -DSTACK_POINTER=$(STACK_POINTER) ../crt0.o ../start.S $(SRC) ./main.cnumber
uint32_t fp_ExtractExponent(uint32_t a);

// Helper function to extract the fraction bits from a float32_t number
uint32_t extractFraction(float32_t a);

// Helper function to extract the fraction bits from a float32_t number
uint32_t fp_ExtractFraction(uint32_t a);

// Helper function to create a float32_t number from sign, exponent, and fraction
float32_t makeFloat(uint32_t sign, uint32_t exponent, uint32_t fraction);


void multiply_fractions(uint32_t a, uint32_t b, uint32_t* result_fraction, uint32_t* result_exp);
// Function to perform subtraction of two float32_t numbers
float32_t float_mul(float32_t a, float32_t b);


// Function to add two floats using integer operations
float32_t float_add(float32_t a, float32_t b);

// Function to perform subtraction of two float32_t numbers
float32_t float_sub(float32_t a, float32_t b);

// Function to convert fraction to binary
uint32_t fractionToBinary_int_exist(uint32_t fraction, uint32_t numBits,uint32_t digits);


// Function to convert fraction to binary
uint32_t fractionToBinary_int_non_exist(uint32_t fraction,uint32_t digits,uint32_t *Exp_shift,char *iszero);

// Perform division of two floats using integer operations
float32_t float_divide(float32_t a, float32_t b);

// Function to compute the inverse sine (asin) using polynomial approximation
float32_t float_asin(float32_t x);

// Function to compute the inverse sine (asin) using polynomial approximation
uint32_t fp_Asin_simple(uint32_t x);

// Function to compute the inverse sine (asin) using polynomial approximation
uint32_t fp_Asin(uint32_t x);

// Function to compute the inverse sine (asin) using polynomial approximation
float32_t float_asin_Taylor_series(float32_t x);

// Function to compute the inverse sine (asin) using polynomial approximation
float32_t float_Sqrt_Taylor_series(float32_t y);
// Function to compute the sqrt(x) using polynomial approximation

/*
NOTE: This function is an apporximation of sqrt(x) where 0 < x < 30.
If your x is not in this range consider normalizing by adjusting the value
of const_15 and the Devider
the approximation is g(x) = sqrt(x+1)  for -1 < x < 1. You need to bring the range of your x to this range 
using follwoing formula:  
your function ==> f(x) for  n < x < m
f(x) = sqrt(m-n) * g(x/(m-n) - 1) for -1 < x < 1
*/

uint32_t fp_Sqrt(uint32_t y);
uint32_t fp_Sqrt_x_lt_30(uint32_t y);
// Function to compute the cos using polynomial approximation
float32_t float_Cos_Taylor_series(float32_t x);

// Function to compute the cos using polynomial approximation
uint32_t fp_Cos(uint32_t x);

uint32_t fp_Sin(uint32_t x);
// Function to compute the pow(x,y) assuming that y doesnt have integer     
float32_t power(float32_t base, float32_t exponent_t);


// Function to compute the pow(x,y) using polynomial approximation 
//  Here we assume that exponent is normalized and not in the denormalized range
uint32_t fp_Pow(uint32_t base, uint32_t exponent);

// Function to compute the pow(x,y) using polynomial approximation 
//  Here we assume that exponent is normalized and not in the denormalized range
// int pow_fp_itr(int base, int exponent) {
//         // if exponent is zero return 1.0
//     int result = 0x3f800000;// result  = 1.0
//     if(exponent == 0)
//         return 0x3f800000;// return 1.0

//     if(base == 0x3f800000)// if base == 1.0
//         return 0x3f800000;// return 1.0

//     if(base == 0)
//      return 0;

//     for(int i=0 ; i < exponent ; i++)
//         result = fpmul(result,base);
//     return result;
// }

// calculate absolute value of floating point number x
uint32_t fp_Fabs(uint32_t x);

uint32_t fp_Reg2deg(uint32_t x);

uint32_t eg2rad(uint32_t x);
uint32_t fp_Acos(uint32_t x);


// Function to convert an integer to a string
void intToString(uint32_t num, char* str);

uint32_t fp_Exp(uint32_t x);
// Casting float to integer. if x is greater than the range of integer the result is valid
// This is equivalent of (int)x where x is a float
int cast_Fp_To_Int(uint32_t x);
// int_to_float convert int value between certain range to float format 
uint32_t int_to_float(int x);
void memset_Char_t(unsigned char* ptr,char value,uint32_t size);

void memset_Int_t(uint32_t* ptr,uint32_t value,uint32_t size);

// uint32_t call_fpmul_py_CAPI(uint32_t RS1,uint32_t RS2);
void pr_uint32(char space,uint32_t x);

/// YR
uint32_t signInv(uint32_t x);
void PrintInt(uint32_t num);
void Print(char *str,printvar*var);
void snPrint(char* buffer,int n,char *str,printvar*var);
void printHex(uint32_t x);
int strlen(char *str);
void strncpy(char *dest, const char *src, size_t n);
void strcpy(char *dest, const char *src);
void Srand(unsigned int seed);
unsigned int Rand(void);
int strcmp(const char *str1, const char *str2);
uint32_t Atof(const char *str);
uint32_t floor(uint32_t x);
int atoi(const char *s);
void mopen(MFILE *mfile, const char *mode);
int meof(MFILE *mfile);
__SIZE_TYPE__ mread(void *_ptr, __SIZE_TYPE__ size, MFILE *mfile);
char * mgets(char *s, size_t size, MFILE *mfile);
int abs(int i);
int sscanc4(const char *buf, const char *fmt, char *a,char *b,char *c, char *d);
void bcopy(const void *src, void *dest, size_t n);
int sscanf(const char *buf, const char *fmt, uint32_t*var[]);
void bzero(void *s, size_t len);
uint32_t htonl(uint32_t hostlong);
uint32_t str2ieee(const char *str);
__SIZE_TYPE__ mwrite(void *_ptr, __SIZE_TYPE__ size, MFILE *mfile);
/// YR
#endif