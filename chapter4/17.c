#include <stdio.h>

int main(void)
{

    int n;
    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);  // skip
    printf("n = %d\n", n);

    return 0;

}
