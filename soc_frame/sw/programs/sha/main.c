/// change input.asc
/// run
/// python3 file2hex.py input.asc input.h __input
#include "util.h"
#include "sha.h"
#include "input.h"

void  my_main()
{
    MFILE __fin = {
    "input",
    __input_sz,
    __input,
    0
    };
    MFILE *fin = &__fin;
    SHA_INFO sha_info;

    sha_stream(&sha_info, fin);
	sha_print(&sha_info);
}