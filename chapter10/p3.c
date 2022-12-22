#include <stdio.h>

int main(void)
{
    int i, temp;
    int a[] = {5, 4, 6, 7, 8, 44, 11, 21};
    
    for (i = 0, temp = 0; i < sizeof(a) / sizeof(a[0]); i++)
        temp = *(a + i) > temp ? *(a + i) : temp;

    printf("result = %d\n", temp);

    return 0;
}
