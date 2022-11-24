#include <stdio.h>

int main(void)
{

    int a;
    int b;
    scanf("%d", &a);
    b = a;
    int number = 0;

    for (; b > 0; b--)
    {
        if (b % 2 == 0)
            continue;
        
        for (a = b / 2; a > 1; a--)
        {
            if(b % a == 0)
                break;

        }

        if (a == 1)
            printf("number = %d\n", b);

    }


    return 0;

}
