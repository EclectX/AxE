#ifndef UTIL_H
#define UTIL_H


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
int fpdiv(int rs1, int rs2);

// is now done in the asm file.

void signal_fin();

void signal_kill_sim();
// -----------------------------------------------------------------------------
// 
// P R I N T
// 
// -----------------------------------------------------------------------------

// TODO - add some define to supress debug output. do it here so you don't
// have to worry about it when adding new output.

// char
// -------------------------------------

// str
// -------------------------------------
void print_str_str_n( const char *p,const char * t );
void print_str_dec_n( const char *T,unsigned int val );

void print_str_n(const char *p);
// dec
// -------------------------------------

void print_dec_n(unsigned int val);

// binary
// -------------------------------------

void print_bin_n(unsigned int val, int bits);
// newline
// -------------------------------------


// print_assert
// -------------------------------------
void emb_assert( unsigned int line, const char *file, const char *exp );



#endif
