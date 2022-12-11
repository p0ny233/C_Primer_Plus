#include <stdio.h>

int imin(int, int);

int main(void)
{

    int a;
    int b;
    int min = 0;
    
    while (printf("number1 :"), scanf("%d", &a) && printf("number2 :"), scanf("%d", &b))
    {
        min = imin(a, b);
        printf("result = %d\n", min);
    }

    printf("Bye\n");

    return 0;


}

int imin(int a, int b)
{

    return a > b ? b : a;
}
