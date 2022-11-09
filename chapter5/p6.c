#include <stdio.h>

int main(void)
{
    int days;

    int dollar = 0;
    
    int i = 0;

    while (printf("enter a number "), scanf("%d", &days))
    {

        while (i++, i <= days)
        {
            dollar += (i * i);
            
        }
        printf("$%d\n", dollar);    
        i = 0;
        dollar = 0;
    }
    return 0;

}
