/**
 * @file
 * @author [serturx](https://github.com/serturx/)
 * @brief Encode a null terminated string using [Run-length encoding](https://en.wikipedia.org/wiki/Run-length_encoding)
 * @details
 * Run-length encoding is a lossless compression algorithm.
 * It works by counting the consecutive occurences symbols
 * and encodes that series of consecutive symbols into the
 * counted symbol and a number denoting the number of
 * consecutive occorences.
 * 
 * For example the string "AAAABBCCD" gets encoded into "4A2B2C1D"
 * 
 */
#include "util.h"
#include "print.h"
#include "memmgr.h"

char* run_length_encode(char* str) {
    int str_length = strlen(str);
    int encoded_index = 0;

    char* encoded = memmgr_alloc(2 * strlen(str) + 1);
    
    char int_str[20];

    for(int i = 0; i < str_length; ++i) {
        int count = 0;
        char current = str[i];

        while(current == str[i + count]) count++;

        i += count - 1;

        snPrint(int_str,20,"%d",PRINTVARS(count));
        strncpy(&encoded[encoded_index], int_str, strlen(int_str));

        encoded_index += strlen(int_str);
        encoded[encoded_index] = current;
        ++encoded_index;
    }

    encoded[encoded_index] = '\0';
    char* compacted_string = memmgr_alloc(strlen(encoded) + 1);
    strcpy(compacted_string, encoded);
    
    memmgr_free(encoded);

    return compacted_string;
}

void my_main(){
    char *in, *out;
    in = "aaaaaaabbbaaccccdefaadr";
    out = run_length_encode(in);
    Print("in: %s -> out: %s\n",PRINTVARS(in, out));
    memmgr_free(out);
 
    in = "lidjhvipdurevbeirbgipeahapoeuhwaipefupwieofb";
    out = run_length_encode(in);
    Print("in: %s -> out: %s\n",PRINTVARS(in, out));
    memmgr_free(out);

    in = "htuuuurwuquququuuaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaahghghrw";
    out = run_length_encode(in);
    Print("in: %s -> out: %s\n",PRINTVARS(in, out));
    memmgr_free(out);
    display_print(0,0,"\nAll tests have passed!\n");
}