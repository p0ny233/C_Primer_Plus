#include <stdio.h>

int main(void)
{
    int number;
    int temp;

    printf("Please Enter a number: ");
    scanf("%d", &number);
    temp = number + 10;
    while (temp >= number)
    {
        printf("%d\t", number);
        number++;
    }

    printf("\nDone !\n");
    return 0;


}
