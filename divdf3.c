static inline __attribute__((always_inline)) float fpdiv(float rs1, float rs2) {
    float rd;
    asm volatile (
        ".insn r 0x33, 0x2, 0x3, %0, %1, %2"
        : "=r" (rd)
        : "r" (rs1), "r" (rs2)
    );
    return rd;
}

double
__divdf3 (double a, double b)
{
  float x = (float)a;
  float y = (float)b;
  float z =  fpdiv(a,b);
  return (double)z;
  // FP_DECL_EX;
  // FP_DECL_S (A);
  // FP_DECL_S (B);
  // FP_DECL_S (R);
  // SFtype r;

  // FP_INIT_ROUNDMODE;
  // FP_UNPACK_S (A, a);
  // FP_UNPACK_S (B, b);
  // FP_MUL_S (R, A, B);
  // FP_PACK_S (r, R);
  // FP_HANDLE_EXCEPTIONS;

  //  r;
}
