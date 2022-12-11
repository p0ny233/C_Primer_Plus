#include <stdio.h>

long fact(int);
long rfact(int);

int main(void)
{
    int num;

    printf("This program calculates factorials.\n");
    printf("Enter a value in the range 0-12 (q to quit):\n");

    while(scanf("%d", &num))
    {
        if (num < 0)
            printf("No negative numbers, please.\n");
        else if (num > 12)
            printf("Keep input under 13.\n");
        else 
        {
            printf("loop: %d factorial = %ld\n", num, fact(num));
            printf("recursion: %d factorial = %ld\n", num, rfact(num));

        }

        printf("Enter a value in the range 0-12 (q to quit):\n");
    }

    return 0;

}

long fact(int num)
{

    long ans;
    for (ans = 1; num > 1; num--)
        ans *= num;

    return ans;

}

long rfact(int num)
{
    long ans;

    if(num > 0)
        ans = num * rfact(num - 1);
    else 
        ans = 1;

    return ans;

}
