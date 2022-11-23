#include <stdio.h>
#include <stdbool.h>


int test_custom_define(void)
{

    int a;
    int num;
    int i;
    scanf("%d", &num);
    
    if (num % 2 == 0)
    {

        printf("%d is false\n", num);
        return 0;
    }
    else 
    {

        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                printf("%d is false\n", num);
                return 0;

            }

        }

    }

    printf("%d is primer\n", num);

    return 0;



}

int test_from_book_define(void)
{
    unsigned long num;
    unsigned long div;
    bool isPrime;

    printf("Please enter an integer for analysis; ");
    printf("Enter q to quit.\n");

    while (scanf("%lu", &num) == 1)
    {
        for (div = 2, isPrime = true; (div * div) <= num; div++)
        {
            if (num % div == 0)
            {
                if ((div * div) != num)
                    printf("%lu is divsible by %lu and %lu.\n",num ,div, num / div);

                else 
                    printf("%lu is divsible by %lu.\n", num, div);
                
                isPrime = false;

            }
        }

        if (isPrime)
            printf("%lu is Prime\n", num);

        printf("Please enter another integer for analysis; ");
        printf("Enter q to quit.\n");
    }
        
    printf("Bye.\n");


}

int main(void)
{

    test_from_book_define();

    return 0;

}
