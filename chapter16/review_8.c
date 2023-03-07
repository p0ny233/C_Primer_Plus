#include <stdio.h>

#define X86


int main(void)
{


#ifdef X86
    printf("x86\n");
#else
    printf("arm\n");
#endif

    return 0;
}



