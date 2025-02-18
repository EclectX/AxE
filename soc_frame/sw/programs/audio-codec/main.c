/**
 * @file
 * @author [sunzhenliang](https://github.com/HiSunzhenliang)
 * @brief A-law algorithm for encoding and decoding (16bit pcm <=> a-law).
 * This is the implementation of [G.711](https://en.wikipedia.org/wiki/G.711)
 * in C.
 **/
#include "util.h"
#include "print.h"

#define LEN ((size_t)8)

short pcm[LEN] = {1000, -1000, 1234, 3200, -1314, 0, 32767, -32768};

unsigned short r_coded[LEN] = {250, 122, 230, 156, 97, 213, 170, 42};

short r_decoded[LEN] = {1008, -1008, 1248, 3264, -1312, 8, 32256, -32256};

void encode(unsigned short *out, short *in, size_t len){
    unsigned short alaw = 0;
    short pcm = 0;
    int sign = 0;
    int abcd = 0;
    int eee = 0;
    int mask = 0;
    for (size_t i = 0; i < len; i++){
        pcm = *in++;
        eee = 7;
        mask = 0x4000;
        sign = (pcm & 0x8000) >> 8;
        pcm = sign ? (-pcm - 1) : pcm;
        while ((pcm & mask) == 0 && eee > 0)
        {
            eee--;
            mask >>= 1;
        }
        abcd = (pcm >> (eee ? (eee + 3) : 4)) & 0x0f;
        eee <<= 4;
        alaw = (sign | eee | abcd);
        *out++ = alaw ^ 0xD5;
    }
}
void decode(short *out, unsigned short *in, size_t len){
    unsigned short alaw = 0;
    int pcm = 0;
    int sign = 0;
    int eee = 0;
    for (size_t i = 0; i < len; i++){
        alaw = *in++;
        alaw ^= 0xD5;
        sign = alaw & 0x80;
        eee = (alaw & 0x70) >> 4;
        pcm = (alaw & 0x0f) << 4 | 8;
        pcm += eee ? 0x100 : 0x0;
        pcm <<= eee > 1 ? (eee - 1) : 0;
        *out++ = sign ? -pcm : pcm;
    }
}
static void test(short *pcm, unsigned short *coded, short *decoded, size_t len){
    encode(coded, pcm, len);
    decode(decoded, coded, len);
}
void my_main(){
    unsigned short coded[LEN];

    short decoded[LEN];

    test(pcm, coded, decoded, LEN);
    display_print(0,0,"inputs: ");
    for (size_t i = 0; i < LEN; i++)
    {
        Print("%d ",PRINTVARS(pcm[i]));
    }
    display_print(0,0,"\n");

    display_print(0,0,"encode: ");
    for (size_t i = 0; i < LEN; i++)
    {
        Print("%d ",PRINTVARS(coded[i]));
    }
    display_print(0,0,"\n");

    display_print(0,0,"decode: ");
    for (size_t i = 0; i < LEN; i++)
    {
        Print("%d ",PRINTVARS(decoded[i]));
    }
    display_print(0,0,"\n");
    return 0;
}
