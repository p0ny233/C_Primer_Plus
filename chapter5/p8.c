#include <stdio.h>

int main(void)
{

    int n1;
    int n2 = 0;

    printf("enter a number 1 : ");
    scanf("%d", &n1);
    while (1)
    {
        
        printf("enter next number : ");
        scanf("%d", &n2);
        if (n2 < 0)
            break;
        printf("%d %% %d = %d\n", n2, n1, n2 % n1);
        n2 = 0;
    }
    printf("Done !\n");


    return 0;
}
