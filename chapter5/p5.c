#include <stdio.h>

int main(void)
{
    int days;

    int dollar = 0;
    
    int i = 1;
    while (printf("enter a number "), scanf("%d", &days))
    {

        while (i <= days)
        {
            dollar += i;
            i++;
        }
        printf("$%d\n", dollar);    
        i = 1;
        dollar = 0;
    }
    return 0;

}
