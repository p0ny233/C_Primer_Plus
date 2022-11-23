#include <stdio.h>

int main(void)
{
    int i = 0;
    int array[10];
    int len = sizeof(array) / sizeof(array[0]);
    
    for (; i < len; i++ )
        scanf("%d", &array[i]);

    for (i--; i >= 0; i--)
        printf("%d", array[i]);
    
    printf("\n");
    return 0;

}
