#include <stdio.h>
#include <string.h>

#define LEN 3

typedef struct lens {
    float foclen;
    float fstop;
    char brand[30];
} LENS;

int main(void)
{

    char brand[30] = "Remarkata";
    LENS lens[LEN];

    (lens + 2)->foclen = 500;
    (lens + 2)->fstop = 2.0;
    strncpy((lens + 2)->brand, brand, strlen(brand));


    printf("%f %f %s\n", (lens + 2)->foclen, (lens + 2)->fstop, (lens + 2)->brand);

    return 0;
}



