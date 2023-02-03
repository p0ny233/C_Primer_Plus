#include <stdio.h>

extern unsigned long int rand1(void);
extern void srand1(unsigned int);

int main(void)
{

    unsigned value;
    int i;

    while (printf("Please enter your choice for seed.\n") && scanf("%u", &value))
    {
        srand1(value);

        for (i = 0; i < 5; i++)
        {
            printf("%d\n", rand1());
        }
    }
}
