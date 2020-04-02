#include <cstdio>
#include "s_lib/s_lib.h"
#include "d_lib/d_lib.h"

int main()
{
    printf("static_library test : %d\n", static_test(1));
    printf("dynamic_library test : %d\n", dynamic_test(1));

    return 0;
}