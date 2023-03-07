#include <stdio.h>
#define PR(X) printf("name: " #X "; value: %d; address: %p", X)

int main(void)
{

    int fop = 23;

    PR(fop);

    return 0;
}
