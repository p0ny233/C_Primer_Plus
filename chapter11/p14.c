#include <stdio.h>
#include <stdlib.h>

int main(int args, char * argv[])
{
    double result;

    if (args < 3)
    {
        puts("Usage: ./a.out 12.3 5");
        exit(0);
    }
    
    double d1 = atof(argv[1]);
    int i1 = atoi(argv[2]);
    if ((d1 < 0.0))
        puts("args number is error");

    result = d1;

    for (; i1 - 1; i1--)
        result *= d1;

    printf("result = %f\n", result);
    return 0;
}
