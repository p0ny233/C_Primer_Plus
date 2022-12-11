#include <stdio.h>

void setBit(unsigned long num);

#define size 65

int main(void)
{
    
    unsigned long number;
    char bit[size] = {0};

    while (scanf("%ld", &number))
    {
        
        setBit(number);

        putchar('\n');
    }

    return 0;

}

void setBit(unsigned long num)
{
    if (num > 1)
        setBit(num / 2);
    
    putchar((num % 2) + '0');
    return;
}
