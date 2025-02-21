#include "util.h"
// #include "print.h"
// int fpadd_counter = 0;
int fpmul(int rs1, int rs2)
{
    int rd;
    asm __volatile__ (".word 0x02A5850B\n");
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
    asm __volatile__ (".word 0x00A5850B\n");
    asm __volatile__ ("addi %0, x10, 0" : "=r" (rd)); //TODO: what is addi? Assembly? May have to be edited to also designate the custom instruction used (PCPI_FPADD)

    return rd;
}

__attribute__((noinline))
int amul(int rs1, int rs2)
{
    int rd;
    asm __volatile__ (".word 0xFEA5857F\n");
    asm __volatile__ ("addi %0, x10, 0" : "=r" (rd)); //TODO: what is addi? Assembly? May have to be edited to also designate the custom instruction used (PCPI_FPADD)
    
    return rd;
}

__attribute__((noinline))
int emul(int rs1, int rs2)
{
    int rd;
    asm __volatile__ (".word 0x02A58533\n");
    asm __volatile__ ("addi %0, x10, 0" : "=r" (rd)); //TODO: what is addi? Assembly? May have to be edited to also designate the custom instruction used (PCPI_FPADD)
    
    return rd;
}


__attribute__((noinline))
int fpsub(int rs1, int rs2)
{
    int rd;
    asm __volatile__ (".word 0x04A5850B\n");
    asm __volatile__ ("addi %0, x10, 0" : "=r" (rd)); //TODO: what is addi? Assembly? May have to be edited to also designate the custom instruction used (PCPI_FPADD)
    
    return rd;
}


__attribute__((noinline))
int fpdiv(int rs1, int rs2)
{
    int rd;
    asm __volatile__ (".word 0x06A5850B\n");
    asm __volatile__ ("addi %0, x10, 0" : "=r" (rd)); //TODO: what is addi? Assembly? May have to be edited to also designate the custom instruction used (PCPI_FPADD)
    
    return rd;
}

__attribute__((noinline))
void checkprint_str(int rs1, int rs2)
{
    asm __volatile__ (".word 0x0EA5850B\n");
}
__attribute__((noinline))
void checkprint_float(int rs1)
{
    asm __volatile__ (".word 0x0EA5950B\n");//0ea5a50b
}
__attribute__((noinline))
void checkprint_int(int rs1)
{
    asm __volatile__ (".word 0x0EA5A50B\n");//0ea5a50b
}
void display_print(int is_digit,int value,char* str){
    int rs1;
    int rs2;
    if(is_digit == 2){
        checkprint_int(value);
    }
    else if(is_digit == 1){
        checkprint_float(value);
    }
    else{
        int i = 0;
        int j = 0;
        int k = 0;
        while(str[i] != '\0'){
            
            if(j == 0){
                rs1 = str[i];
            }
            else{
                if(j == 8){
                    checkprint_str(rs1,rs2);
                    rs1 = 0;
                    rs2 = 0;
                    j = -1;
                    i-=1;
                }
                else{
                    if(j < 4){
                        rs1 <<= 8;
                        rs1 += str[i];
                        // printf("\n%c",rs1);
                    }
                    else{
                        if(j==4)
                            rs2 = str[i];
                        else{
                            rs2 <<= 8;
                            rs2 += str[i];
                        }
                        // printf("\n%d %d %c",i,j,rs2);
                    }
                }

            }
            j+=1;
            i+=1;
        }
        if(j!=0)
            checkprint_str(rs1,rs2);
    }
}
// is now done in the asm file.

/*signal_fin() is used when the node ran out of charge and is called in trap()
function. I have commented it out because it is writing to emory and 
causes some undefined behaviour*/
// TO BE FIXED
void signal_fin()
{
    *((volatile int*)FINISHED) = FINISHED;
}

/*I didnt see any use of signal_kill_sim() 
It is used to signal the user to kill me. The sim_main.cpp
is using it*/
void signal_kill_sim()
{
    *((volatile int*)OUTPORT) = 0x04;
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

// Helper function to extract the sign bit from a float32_t number
uint32_t extractSign(float32_t a) {
    return a.value >> 31;
}

// Helper function to extract the sign bit from a float32_t number
uint32_t fp_ExtractSign(int a) {
    return a >> 31;
}

// Helper function to extract the exponent bits from a float32_t 	$(CC) -march=$(ARCH) $(CFLAGS) -nostartfiles -o ./$(ARCH)_main.elf $(LINK) ../sp.S -DSTACK_POINTER=$(STACK_POINTER) ../crt0.o ../start.S $(SRC) ./main.cnumber
uint32_t extractExponent(float32_t a) {
    return (a.value >> 23) & 0xFF;
}

// Helper function to extract the exponent bits from a float32_t 	$(CC) -march=$(ARCH) $(CFLAGS) -nostartfiles -o ./$(ARCH)_main.elf $(LINK) ../sp.S -DSTACK_POINTER=$(STACK_POINTER) ../crt0.o ../start.S $(SRC) ./main.cnumber
uint32_t fp_ExtractExponent(int a) {
    return (a >> 23) & 0xFF;
}

// Helper function to extract the fraction bits from a float32_t number
uint32_t extractFraction(float32_t a) {
    return a.value & 0x7FFFFF;
}

// Helper function to extract the fraction bits from a float32_t number
uint32_t fp_ExtractFraction(int a) {
    return a & 0x7FFFFF;
}


// Helper function to create a float32_t number from sign, exponent, and fraction
float32_t makeFloat(uint32_t sign, uint32_t exponent, uint32_t fraction) {
    if(exponent == 0)
        return (float32_t){0};
    return (float32_t){(sign << 31) | (exponent << 23) | fraction};
}

void multiply_fractions(uint32_t a, uint32_t b, uint32_t* result_fraction, uint32_t* result_exp) {
    // Perform multiplication of fractions
    uint32_t a_lo = a & 0xFFFF;
    uint32_t a_hi = a >> 16;
    uint32_t b_lo = b & 0xFFFF;
    uint32_t b_hi = b >> 16;

    // Calculate partial products
    uint32_t prod_lo = a_lo * b_lo;
    uint32_t prod_mid1 = a_lo * b_hi;
    uint32_t prod_mid2 = a_hi * b_lo;
    uint32_t prod_hi = a_hi * b_hi;

    // Add mid products to the result
    uint32_t carry = 0;
    prod_mid1 += prod_mid2;
    if (prod_mid1 < prod_mid2) carry = 1;
    prod_lo += (prod_mid1 << 16);
    if (prod_lo < (prod_mid1 << 16)) carry = 1;

    // Add carry to higher bits
    prod_mid1 += (carry << 16);
    prod_hi += (prod_mid1 >> 16);
    uint32_t LSB_prod_hi;
    while(prod_hi>=1){
        LSB_prod_hi = prod_hi & 0x00000001;
        *result_exp +=1;
        prod_lo = prod_lo >> 1;
        prod_lo = (prod_lo | (LSB_prod_hi << 31));
        prod_hi >>=1;
    }
    while(prod_lo >= 0x1000000){
        *result_exp +=1;
        prod_lo >>=1;
    }
    *result_exp -= 23;
    *result_fraction = prod_lo &0x7FFFFF;
}

// Function to perform subtraction of two float32_t numbers
float32_t float_mul(float32_t a, float32_t b){
    uint32_t signA = extractSign(a);
    uint32_t signB = extractSign(b);
    uint32_t exponentA = extractExponent(a);
    uint32_t exponentB = extractExponent(b);
    uint32_t fractionA = extractFraction(a);
    uint32_t fractionB = extractFraction(b);

    uint32_t fractionResult;
    uint32_t expResult = 0;

    multiply_fractions((fractionA | 0x800000), (fractionB | 0x800000),&fractionResult,&expResult);

    uint32_t exponentResult = exponentB + exponentB + expResult -127;
    uint32_t signResult = signA ^ signB;
    return makeFloat(signResult,exponentResult,fractionResult);
}


// Function to add two floats using integer operations
float32_t float_add(float32_t a, float32_t b) {
    // Extract sign, exponent, and fraction from each number
    uint32_t signA = extractSign(a);
    uint32_t signB = extractSign(b);
    uint32_t exponentA = extractExponent(a);
    uint32_t exponentB = extractExponent(b);
    uint32_t fractionA = extractFraction(a);
    uint32_t fractionB = extractFraction(b);

    // Perform addition of significands with proper alignment
    if ((exponentA < exponentB) | ( (exponentA == exponentB) & (fractionA < fractionB))) {
        // Swap a and b
        uint32_t temp;
        temp = signA; signA = signB; signB = temp;
        temp = exponentA; exponentA = exponentB; exponentB = temp;
        temp = fractionA; fractionA = fractionB; fractionB = temp;
    }

    uint32_t signResult;
    uint32_t fractionResult;
    fractionA |= 0x800000;
    fractionB |= 0x800000;
    if(signA == signB) {
        // Combine signs
        fractionB >>= (exponentA - exponentB);
        signResult = signA;

        // Add fractions
        fractionResult = fractionA + fractionB;

        // Check for overflow
        if (fractionResult >= (1u << 23)) {
            fractionResult >>= 1;
            exponentA++;
        }
    } else {
        // Combine signs
        signResult = signA;

        // Add fractions with proper alignment
        fractionResult = fractionA - (fractionB >> (exponentA - exponentB));

        // Handle normalization and exponent adjustment
        if (fractionResult == 0)
            return makeFloat(0, 0, 0);

        while (fractionResult < (1u << 23)) {
            fractionResult <<= 1;
            exponentA--;

            if (exponentA == 0)
                return makeFloat(0, 0, 0);
        }

        fractionResult &= 0x7FFFFF; // Mask out excess bits
    }

    // Combine exponent
    uint32_t exponentResult = exponentA;

    // Construct the result
    return makeFloat(signResult, exponentResult, fractionResult);
}

// Function to perform subtraction of two float32_t numbers
float32_t float_sub(float32_t a, float32_t b){
    uint32_t signB = extractSign(b);
    if(signB == 0)
        b.value |= (0x80000000);
    else
        b.value &= 0x7FFFFFFF;
    return float_add(a,b);
}

// Function to convert fraction to binary
uint32_t fractionToBinary_int_exist(uint32_t fraction, uint32_t numBits,uint32_t digits) {
    int bit = 0;
    int tmp = 0;
    // Calculate fractional part in binary

    for (int i = 0; i < numBits; i++) {
        fraction *=2;

        int a = fraction - digits;
        int b = 0;
        if(a >= 0){
            fraction -= digits;
            b = 1;
        }
        bit = (bit << 1) | b;
    }

    return bit;
}


// Function to convert fraction to binary
uint32_t fractionToBinary_int_non_exist(uint32_t fraction,uint32_t digits,uint32_t *Exp_shift,char *iszero) {
    int bit = 0;
    int tmp = 0;
    // Calculate fractional part in binary
        while(bit == 0){
            fraction *=2;
            *Exp_shift +=1;

            int a = fraction - digits;
            int b = 0;
            if(a >= 0){
                fraction -= digits;
                b = 1;
                break;
            }
            if(*Exp_shift > 127)
            break;
        }
        if(*Exp_shift >= 127){
            *iszero = '1';
            return bit;
        }
            

        for (int i = 0; i < 23; i++) {
            fraction *=2;

            int a = fraction - digits;
            int b = 0;
            if(a >= 0){
                fraction -= digits;
                b = 1;
            }
            bit = (bit << 1) | b;
        }
    return bit;
}

float32_t stringToFloat(const char *str) {
    // Skip leading whitespace
    while (*str == ' ' || *str == '\t' || *str == '\n')
        str++;

    // Extract sign
    uint32_t sign = 0;
    if (*str == '-') {
        sign = 1;
        str++;
    } else if(*str == '+') {
        str++;
    }

    // Extract integer part
    uint32_t integerPart = 0;
    uint32_t integerLenthBit = 0;
    while (*str >= '0' && *str <= '9') {
        integerPart = integerPart * 10 + (*str - '0');
        str++;
    }
    
    uint32_t integerPartHold = integerPart;
    // Extract fractional part
    uint32_t fractionPart = 0;
    uint32_t fractionPartBit = 0;
    uint32_t fractionLength = 0;
    uint32_t Exp_shift = 0;
    if (*str == '.') {
        str++;
        while (*str >= '0' && *str <= '9') {
            fractionPart = fractionPart * 10 + (*str - '0');
            fractionLength++;
            str++;
        }
    }

    // Combine integer and fractional parts
    uint32_t exponent = 127; // Bias for single-precision exponent
    if(integerPart >= 1)
        exponent--;
    while (integerPart >= 1) {
        integerPart >>= 1;
        exponent++;
        integerLenthBit +=1;
    }
     uint32_t digits = 1;
     char iszero = '0';
     if(integerLenthBit > 23){
        integerPartHold -= 1u<<(integerLenthBit-1);
        return makeFloat(sign, exponent, integerPartHold);
    }   
    for(int i = 0 ; i<fractionLength ; i++)
            digits *= 10;

    if(integerLenthBit == 0){
        fractionPartBit = fractionToBinary_int_non_exist(fractionPart ,digits,&Exp_shift,&iszero);
        if(iszero == '1')
            return makeFloat(0, 0, 0);
        exponent -= Exp_shift;
        return makeFloat(sign, exponent, fractionPartBit);
    }
    fractionPartBit = fractionToBinary_int_exist(fractionPart, 24 - integerLenthBit,digits);
    integerPartHold -= 1u<<(integerLenthBit-1);


    integerPartHold = (integerPartHold << (24 - integerLenthBit)) + fractionPartBit;
    // Normalize fraction part

    // Construct the result
    return makeFloat(sign, exponent, integerPartHold);
}

// / Perform division of two floats using integer operations
float32_t float_divide(float32_t a, float32_t b) {
    // Extract sign, exponent, and fraction from each number
    uint32_t signA = extractSign(a);
    uint32_t signB = extractSign(b);
    uint32_t exponentA = extractExponent(a) ;
    uint32_t exponentB = extractExponent(b);
    uint32_t fractionA = extractFraction(a) | 0x800000;
    uint32_t fractionB = extractFraction(b) | 0x800000;

    // Check for special cases: division by zero or infinity
    if (fractionB == 0 || exponentB == 0xFF) {
        // Handle division by zero or infinity
        // You may want to implement error handling or return appropriate values here
        return makeFloat(0, 0, 0);
    }

    // Perform division of significands
    int quotientExponent = (int)exponentA - (int)exponentB + 127; // Bias for single-precision exponent
    int shift = 0;
    uint32_t quotientFraction = 0;

    // Normalize numerator fraction
    while (fractionA < fractionB) {
        fractionA <<= 1;
        shift++;
    }

    // Perform division
    for (int i = 0; i < 24; i++) {
        quotientFraction <<= 1;
        if (fractionA >= fractionB) {
            fractionA -= fractionB;
            quotientFraction |= 1;
        }
        fractionA <<= 1;

    }
    // Adjust exponent for normalization
    quotientExponent -= shift;
    quotientFraction &= 0x7FFFFF;
    // Create and return the result
    return makeFloat(signA ^ signB, (uint32_t)quotientExponent, quotientFraction);
}

// Function to compute the inverse sine (asin) using polynomial approximation
float32_t float_asin(float32_t x) {
    // Constants for the polynomial approximation
    float32_t A1 = makeFloat(0, 0x7F, 0x490DA4); // 1.5707288
    float32_t A2 = makeFloat(0, 0x7C, 0x593484); // 0.2121144
    float32_t A3 = makeFloat(0, 0x7B, 0x181627); // 0.0742610
    float32_t A4 = makeFloat(0, 0x79, 0x196E36); // 0.0187293


    // Absolute value of x
    float32_t abs_x = x;
    if (extractSign(x)){
        abs_x.value = x.value & 0x7FFFFFFF;
    }
    // Compute asin using the polynomial approximation
    float32_t x_squared = float_mul(abs_x, abs_x);
    float32_t term1 = float_mul(A4, x_squared);
    float32_t term2 = float_mul(A3, x_squared);
    term2 = float_add(term2, A2);
    term1 = float_add(term1, term2);
    term1 = float_mul(term1, x_squared);
    term1 = float_add(term1, A1);

    // Adjust the sign of the result
    float32_t result = term1;
    if (extractSign(x))
        result = float_sub(makeFloat(0, 0, 0), result);

    return result;
}

// Function to compute the inverse sine (asin) using polynomial approximation
int fp_Asin_simple(int x) {
    // Constants for the polynomial approximation

    int A1 = 0x3fc90da4; // 1.5707288
    int A2 = 0x3e593484; // 0.2121144
    int A3 = 0x3d981627; // 0.0742610
    int A4 = 0x3c996e30; // 0.0187293

    // Absolute value of x
    int abs_x = x;
    if (fp_ExtractSign(x)){
        abs_x = x & 0x7FFFFFFF;
    }
    // Compute asin using the polynomial approximation
    int x_squared = fpmul(abs_x, abs_x);
    int term1 = fpmul(A4, x_squared);
    int term2 = fpmul(A3, x_squared);
    term2 = fpadd(term2, A2);
    term1 = fpadd(term1, term2);
    term1 = fpmul(term1, x_squared);
    term1 = fpadd(term1, A1);

    // Adjust the sign of the result
    int result = term1;
    if (fp_ExtractSign(x))
        result &= 0x7FFFFFFF;

    return result;
}


// Function to compute the inverse sine (asin) using polynomial approximation
int fp_Asin(int x) {
    // Constants for the polynomial approximation
    int A3 = 0x3e2aaaab;//0.333333
    int A5 = 0x3d99999a;
    int A7 = 0x3d36db6e;
    int A9 = 0x3cf8e38e;



    // Compute asin using the polynomial approximation
    int  x_2 = fpmul(x, x);
    int x_3 = fpmul(x_2, x);
    int x_5 = fpmul(x_3, x_2);
    int x_7 = fpmul(x_5, x_2);
    int x_9 = fpmul(x_7, x_2);

    int term1 = fpmul(x_3, A3);
    int term2 = fpmul(x_5, A5);
    int term3 = fpmul(x_7, A7);
    int term4 = fpmul(x_9, A9);

    int result = x;
    result = fpadd(x,term1);
    result = fpadd(result,term2);
    result = fpadd(result,term3);
    result = fpadd(result,term4);
    
    return result;
}

// Function to compute the inverse sine (asin) using polynomial approximation
float32_t float_asin_Taylor_series(float32_t x) {
    // Constants for the polynomial approximation
    float32_t A3;
    A3.value = 0x3e2aaaab;//0.333333
    float32_t A5;
    A5.value = 0x3d99999a;
    float32_t A7;
    A7.value = 0x3d36db6e;
    float32_t A9;
    A9.value = 0x3cf8e38e;



    // Compute asin using the polynomial approximation
    float32_t x_2 = float_mul(x, x);
    float32_t x_3 = float_mul(x_2, x);
    float32_t x_5 = float_mul(x_3, x_2);
    float32_t x_7 = float_mul(x_5, x_2);
    float32_t x_9 = float_mul(x_7, x_2);

    float32_t term1 = float_mul(x_3, A3);
    float32_t term2 = float_mul(x_5, A5);
    float32_t term3 = float_mul(x_7, A7);
    float32_t term4 = float_mul(x_9, A9);

    float32_t result = x;
    result = float_add(x,term1);
    result = float_add(result,term2);
    result = float_add(result,term3);
    result = float_add(result,term4);
    
    return result;
}


// Function to compute the inverse sine (asin) using polynomial approximation
float32_t float_Sqrt_Taylor_series(float32_t y) {
        // Constants for the polynomial approximation
    float32_t x;
    float32_t const_15;
    float32_t const_N_one;
    const_N_one.value = 0xbf800000;
    const_15.value = 0x41700000;
    x = float_divide(y,const_15);
    x = float_divide(x,const_N_one);
    float32_t Devider;
    Devider.value = 0x4077dee8;
    float32_t A1;
    A1.value = 0x3f000000;
    float32_t A2;
    A2.value = 0xbe000000;//0.333333
    float32_t A3;
    A3.value = 0x3d800000;
    float32_t A4;
    A4.value = 0xbd200000;
    float32_t A5;
    A5.value = 0x3ce00000;



    // Compute asin using the polynomial approximation
    float32_t x_2 = float_mul(x, x);
    float32_t x_3 = float_mul(x_2, x);
    float32_t x_4 = float_mul(x_3, x);
    float32_t x_5 = float_mul(x_4, x);



    float32_t term1 = float_mul(x, A1);
    float32_t term2 = float_mul(x_2, A2);
    float32_t term3 = float_mul(x_3, A3);
    float32_t term4 = float_mul(x_4, A4);
    float32_t term5 = float_mul(x_5, A5);
    float32_t result = x;
    float32_t constant;
    constant.value = 0x3f800000; 
    result = float_add(constant,term1);
    result = float_add(result,term2);
    result = float_add(result,term3);
    result = float_add(result,term4);
    result = float_add(result,term5);
    result = float_mul(result,Devider);
    return result;
}

//  Function to compute the sqrt(x) using polynomial approximation

/*
NOTE: This function is an apporximation of sqrt(x) where 0 < x < 30.
If your x is not in this range consider normalizing by adjusting the value
of const_15 and the Devider
the approximation is g(x) = sqrt(x+1)  for -1 < x < 1. You need to bring the range of your x to this range 
using follwoing formula:  
your function ==> f(x) for  n < x < m
f(x) = sqrt(m-n) * g(x/(m-n) - 1) for -1 < x < 1
*/

int fp_Sqrt(int y) {
        // Constants for the polynomial approximation
    int x;
    int const_15 = 0x41700000;
    int const_N_one = 0xbf800000;
    x = fpdiv(y,const_15);
    x = fpdiv(x,const_N_one);
    int Devider = 0x4077dee8;
    int A1 = 0x3f000000;
    int A2 = 0xbe000000;//0.333333
    int A3 = 0x3d800000;
    int A4 = 0xbd200000;
    int A5 = 0x3ce00000;



    // Compute sqrt(x) using the polynomial approximation
    int x_2 = fpmul(x, x);
    int x_3 = fpmul(x_2, x);
    int x_4 = fpmul(x_3, x);
    int x_5 = fpmul(x_4, x);



    int term1 = fpmul(x, A1);
    int term2 = fpmul(x_2, A2);
    int term3 = fpmul(x_3, A3);
    int term4 = fpmul(x_4, A4);
    int term5 = fpmul(x_5, A5);
    int result = x;
    int constant = 0x3f800000; 
    result = fpadd(constant,term1);
    result = fpadd(result,term2);
    result = fpadd(result,term3);
    result = fpadd(result,term4);
    result = fpadd(result,term5);
    // Denormalize the result
    result = fpmul(result,Devider);
    return result;
}


// Function to compute the cos using polynomial approximation
float32_t float_Cos_Taylor_series(float32_t x) {
// Constants for the polynomial approximation

    float32_t A2;
    A2.value = 0xbf000000;//0.333333
    float32_t A4;
    A4.value = 0x3d2aaaab;
    float32_t A6;
    A6.value = 0xbab60b61;



    // Compute cos using the polynomial approximation
    float32_t x_2 = float_mul(x, x);
    float32_t x_4 = float_mul(x_2, x_2);
    float32_t x_6 = float_mul(x_4, x_2);

    float32_t term2 = float_mul(x_2, A2);
    float32_t term4 = float_mul(x_4, A4);
    float32_t term6 = float_mul(x_6, A6);

    float32_t result = x;
    float32_t constant;
    constant.value = 0x3f800000; 
    result = float_add(constant,term2);
    result = float_add(result,term4);
    result = float_add(result,term6);
    return result;
}


// Function to compute the cos using polynomial approximation
int fp_Cos(int x) {
// Constants for the polynomial approximation
display_print(0,0,"value to enter cosed: ");display_print(1,x,"");
    uint32_t sign = fp_ExtractSign(x);
    if(sign)
        x &= 0x7FFFFFFF;
// Bring x to the range of -pi and pi
    int y = fpdiv(x,0x40c90fdb);
    y = cast_Fp_To_Int(y);
    y = int_to_float(y);
    x = fpsub(x,fpmul(y,0x40c90fdb));
    x = fpsub(x,0x40490fdb);
    display_print(0,0,"value to be cosed: ");display_print(1,x,"");
    int A2 = 0x3f000000;//0.5
    int A4 = 0xbd2aaaab;//-0.041666668 = -1/24
    int A6 = 0x3ab60b60;//0.0013888888 = 1/720
    int A8 = 0xb7d00998;//-0.0000248 = -1/40320
    int A10 = 0x3493f27e;//0.000000275573192 = 1/3628800

    // Compute cos using the polynomial approximation
    int x_2 = fpmul(x, x);
    int x_4 = fpmul(x_2, x_2);
    int x_6 = fpmul(x_4, x_2);
    int x_8 = fpmul(x_6, x_2);
    int x_10 = fpmul(x_8, x_2);

    int term2 = fpmul(x_2, A2);
    int term4 = fpmul(x_4, A4);
    int term6 = fpmul(x_6, A6);
    int term8 = fpmul(x_8, A8);
    int term10 = fpmul(x_10,A10);

    int result = x;
    int constant = 0xbf800000; 
    result = fpadd(constant,term2);
    result = fpadd(result,term4);
    result = fpadd(result,term6);
    result = fpadd(result,term8);
    result = fpadd(result,term10);
    display_print(0,0,"cos results ");display_print(1,result,"");
    return result;
}

uint32_t fp_Sin(uint32_t x){
// Constants for the polynomial approximation
// check the value's sign
display_print(0,0,"value to enter sined: ");display_print(1,x,"");
    uint32_t sign  = fp_ExtractSign(x);
    if(sign)
        x &= 0x7FFFFFFF;
// Bring x to the range of 0 and 2*pi
    int y = fpdiv(x,0x40c90fdb);
    y = cast_Fp_To_Int(y);
    y = int_to_float(y);
    x = fpsub(x,fpmul(y,0x40c90fdb));
    x = fpsub(x,0x40490fdb);
    // if(sign)
    //     x = fpsub(0,x);
    display_print(0,0,"value to be sined: ");display_print(1,x,"");
    int A1 = 0xbf800000;//-1
    int A3 = 0x3e2aaaab;//0.1666666667 = 1/6
    int A5 = 0xbc088889;//0.008333333333 = -1/120
    int A7 = 0x39500d01;//0.000198412698 = 1/5040
    int A9 = 0xb493f27e;//-0.000000275573192 = -1/3628800

    // Compute cos using the polynomial approximation
    int x_1 = x;
    int x_2 = fpmul(x_1,x_1);
    int x_3 = fpmul(x_1, x_2);
    int x_5 = fpmul(x_3, x_2);
    int x_7 = fpmul(x_5, x_2);
    int x_9 = fpmul(x_7, x_2);

    int term1 = fpmul(x_1, A1);
    int term3 = fpmul(x_3, A3);
    int term5 = fpmul(x_5, A5);
    int term7 = fpmul(x_7, A7);
    int term9 = fpmul(x_9, A9);

    int result = x;
    // int constant = 0x3f800000; 
    result = fpadd(term1,term3);
    result = fpadd(result,term5);
    result = fpadd(result,term7);
    result = fpadd(result,term9);
    if(sign)
        result = fpsub(0,result);
    display_print(0,0,"sin results ");display_print(1,result,"");
    return result;
}

// Function to compute the pow(x,y) assuming that y doesnt have integer     
float32_t power(float32_t base, float32_t exponent_t) {
    float32_t result;
    result.value = 0x3f800000;
    float32_t const_1;
    const_1.value = 0x3f800000;
    int i;
    uint32_t exponent = extractExponent(exponent_t) - 127;
    // Handle negative exponents
    if (exponent < 0) {
        base = float_divide(const_1,base);
    }
    uint32_t itr = (1u << exponent);
    for (i = 0; i < itr; i++) {
        result = float_mul(result,base);
    }

    return result;
}


// Function to compute the pow(x,y) using polynomial approximation 
//  Here we assume that exponent is normalized and not in the denormalized range
int fp_Pow(int base, int exponent) {

    // if exponent is zero return 1.0
    int result = 0x3f800000;// result  = 1.0
    if(exponent == 0)
        return 0x3f800000;// return 1.0


    int eSign = fp_ExtractSign(exponent);
    int eExponet = fp_ExtractExponent(exponent);
    int eFraction = fp_ExtractFraction(exponent);
    int intPower = 0;
    if(eExponet >=150){
        intPower = ((eFraction|0x800000) << (eExponet - 150));
        for(int i=0 ; i < intPower ; i++)
            result = fpmul(result,base);
        return result;
    }
    if(eExponet >= 127 && eExponet < 150){
        intPower = (eFraction | 0x800000) >> (150 - eExponet);
        for(int i = 0 ; i < intPower ; i++)
            result = fpmul(result,base);
        // fp_Pow_taylor()
        return result;
    }
    return 1;
}

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
int fp_Fabs(int x) {
    if(fp_ExtractExponent(x))
        x &= 0x7FFFFFFF;
    return x;
}

int fp_Reg2deg(int x){
    int coeff = 0x3c8ee7a7;
    return fpmul(coeff,x);
}

int eg2rad(int x){
    int coeff = 0x42654ca3;
    return fpmul(coeff,x);
}

int fp_Acos(int x){
    int Pi_2 = 0x3fc8f5c3;
   return fpsub(Pi_2 , fp_Asin(x));
}


// Function to convert an integer to a string
void intToString(int num, char* str) {
    if (num == 0) {
        str[0] = '0';
        str[1] = '\0';
        return;
    }

    int i = 0;
    if (num < 0) {
        str[i++] = '-';
        num = -num;
    }

    int len = 0;
    int temp = num;
    while (temp > 0) {
        temp /= 10;
        len++;
    }

    str[i + len] = '\0'; // Null-terminate the string

    for (int j = i + len - 1; j >= i; j--) {
        str[j] = num % 10 + '0'; // Convert digit to character
        num /= 10;
    }
}

int fp_Exp(int x){
    return x;
}
// Casting float to integer. if x is greater than the range of integer the result is invalid
// This is equivalent of (int)x where x is a float
int cast_Fp_To_Int(int x){
    uint32_t S = fp_ExtractSign(x);
    uint32_t F = fp_ExtractFraction(x);
    uint32_t E = fp_ExtractExponent(x);
    int exponent = E - 127; 
    int result = F | 0x800000;

    if (exponent >= 23) {
        result <<= (exponent - 23);  // Shift left if exponent is larger
    } else if (exponent >= 0) {
        result >>= (23 - exponent);  // Shift right if exponent is smaller
    } else {
        result = 0;  // If the exponent is too small, the result is 0 (as integer)
    }

    // Apply the sign bit
    if (S) {
        result = -result;
    }
    return result;
}


uint32_t int_to_float(int x) {
    // Handle special case for zero
    if (x == 0) {
        return 0;  // IEEE 754 representation of 0 is all bits zero
    }
    
    // Step 1: Determine the sign bit
    uint32_t sign = x < 0 ? 1 : 0;

    // Step 2: Compute the absolute value
    uint32_t abs_x = x < 0 ? -x : x;

    // Step 3: Find the position of the highest set bit (MSB)
    uint32_t exponent = 0;
    uint32_t temp = abs_x;
    while (temp != 0) {
        exponent++;
        temp >>= 1;
    }

    // Step 4: Normalize the absolute value (shift left to have MSB at the 24th position)
    uint32_t normalized = abs_x;
    if (exponent > 0 && exponent <= 24) {
        normalized = abs_x << (23 - (exponent - 1));
    }

    if(exponent > 24)
        normalized = abs_x >> (exponent - 24);
    // Step 5: Mask the 23 bits of the fraction
    uint32_t fraction = normalized & 0x7FFFFF; // Mask out the lower 23 bits for fraction
    // printf("\n%d %u %u %u",x,fraction,exponent,sign);
    // Step 6: Adjust the exponent with the bias (127)
    exponent = (exponent - 1) + 127;

    // Step 7: Combine sign, exponent, and fraction to form the floating-point representation
    uint32_t result = (sign << 31) | (exponent << 23) | fraction;

    return result;
}
void memset_Char_t(unsigned char* ptr,char value,int size){}

void memset_Int_t(int* ptr,int value,int size){}


