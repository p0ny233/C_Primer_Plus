#include <stdio.h>

int convert(int* data)
{

    return (*data)++;

}

int main(void)
{
    /*
    int a = 0, *ptr;
    
    ptr = &a;

    *ptr = 3;

    a = (*ptr)++;

    printf("a = %d, *ptr = %d\n", a, *ptr);
    
    return 0;
    */

    int a = 56;
    
    convert(&a);
    
    printf("a = %d\n", a);

    a = convert(&a);

    printf("a = %d\n", a);

    return 0;


}
