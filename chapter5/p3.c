#include <stdio.h>

#define WEEKENDAY 7

int main(void)
{
    int days;

    while (printf("Please Enter day number: "), scanf("%d", &days), days > 0)
    {
        printf("%d days are %d weeks, %d days\n", days, days / WEEKENDAY, days % WEEKENDAY);
    }
    

    printf("Done !\n");


    return 0;

}
