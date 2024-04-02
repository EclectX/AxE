#include "util.h"
#include "print.h"
int fpmul(int rs1, int rs2)
{
    int rd;
    asm __volatile__ (".word 0x02C5850B\n");
    asm __volatile__ ("addi %0, x10, 0" : "=r" (rd)); //TODO: what is addi? Assembly? May have to be edited to also designate the custom instruction used (PCPI_FPADD)
    
    return rd;
}


__attribute__((noinline))
int fpmul_approx(int rs1, int rs2)
{
    int rd;
    asm __volatile__ (".word 0x82C5850B\n");
    asm __volatile__ ("addi %0, x10, 0" : "=r" (rd)); //TODO: what is addi? Assembly? May have to be edited to also designate the custom instruction used (PCPI_FPMUL_APPROX)
    
    return rd;
}


__attribute__((noinline))
int fpadd(int rs1, int rs2)
{
    int rd;
    asm __volatile__ (".word 0x00C5850B\n");
    asm __volatile__ ("addi %0, x10, 0" : "=r" (rd)); //TODO: what is addi? Assembly? May have to be edited to also designate the custom instruction used (PCPI_FPADD)
    
    return rd;
}


__attribute__((noinline))
int fpsub(int rs1, int rs2)
{
    int rd;
    asm __volatile__ (".word 0x04C5850B\n");
    asm __volatile__ ("addi %0, x10, 0" : "=r" (rd)); //TODO: what is addi? Assembly? May have to be edited to also designate the custom instruction used (PCPI_FPADD)
    
    return rd;
}


__attribute__((noinline))
int fpdiv(int rs1, int rs2)
{
    int rd;
    asm __volatile__ (".word 0x06C5850B\n");
    asm __volatile__ ("addi %0, x10, 0" : "=r" (rd)); //TODO: what is addi? Assembly? May have to be edited to also designate the custom instruction used (PCPI_FPADD)
    
    return rd;
}
// is now done in the asm file.

/*signal_fin() is used when the node ran out of charge and is called in trap()
function. I have commented it out because it is writing to emory and 
causes some undefined behaviour*/
// TO BE FIXED
void signal_fin()
{
    // *((volatile int*)FINISHED) = FINISHED;
}

/*I didnt see any use of signal_kill_sim() 
It is used to signal the user to kill me. The sim_main.cpp
is using it*/
void signal_kill_sim()
{
    // *((volatile int*)OUTPORT) = 0x04;
}
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
void print_str_str_n( const char *p,const char * t ){}
void print_str_dec_n( const char *T,unsigned int val ){}

void print_str_n(const char *p){}
// dec
// -------------------------------------

void print_dec_n(unsigned int val){}

// binary
// -------------------------------------

void print_bin_n(unsigned int val, int bits){}
// newline
// -------------------------------------


// print_assert
// -------------------------------------
void emb_assert( unsigned int line, const char *file, const char *exp ){}


