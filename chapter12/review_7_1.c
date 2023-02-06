#include <stdio.h>

int daisy;

int main(void)
{
    int lily;
    lily = 0;

    return 0;
}


int petal()
{
    extern int daisy, lily;
    printf("daisy = %d lily = %d\n", daisy, lily);
    //daisy = 1;
    //lily = 3;
    //printf("daisy = %d ", daisy);
    return 0;

}

