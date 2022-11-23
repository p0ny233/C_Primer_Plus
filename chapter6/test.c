#include <stdio.h>

void t1(void)
{
    char ch;
    int a;
    int status = 2;
    printf("enter a number: ");
    status = scanf("%d", &a);
    printf("status = %d\n", status);


    printf("\nenter a number: \n");
    
    status = scanf("%c", &ch);
    
    printf("status = %d\n", status);

    printf("ch = %c\n", ch);
    
    return;

}

void t2(void)
{
    
    int a = 2, b = 3;

    int c = (++a, b = a + b);

    return;

}
int main(void)
{
    
    t2();

    return 0;

}
