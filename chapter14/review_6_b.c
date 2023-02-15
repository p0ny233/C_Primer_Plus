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
    LENS lens[LEN] = {
        {.foclen=1.0, .fstop=3.0, .brand="moto"},
        {1.2, 4.1, "wds"},
        {5.1, 1.2, "qqq"}
    };

    printf("%f %f %s\n", (lens)->foclen, (lens)->fstop, (lens)->brand);
    printf("%f %f %s\n", (lens + 1)->foclen, (lens + 1)->fstop, (lens + 1)->brand);
    printf("%f %f %s\n", (lens + 2)->foclen, (lens + 2)->fstop, (lens + 2)->brand);

    return 0;
}



