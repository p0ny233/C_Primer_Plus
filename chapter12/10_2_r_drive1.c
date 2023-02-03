#include <stdio.h>
#include <time.h>

extern unsigned int rand1(void);
extern void srand1(unsigned int);


int main(void)
{
    int i;
    unsigned int value;

    while (printf("Please Enter your choice for seed.\n") && scanf("%u", &value))
    {
        srand1((unsigned int)time(NULL));
        
        for (i = 0; i < 5; i++)
            printf("%d\n", rand1());
    }

    return 0;
}
