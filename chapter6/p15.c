#include <stdio.h>
#include <string.h>


int main(void)
{
    int max = 255;
    int i;

    char arr[max];
    char ch;

    for (i = 0; i < max; i++)
    {
        scanf("%c", &arr[i]);
       
    }

    for (i = strlen(arr); i >= 0; i--)
    {
        printf("%c", arr[i]);
    }
    
    printf("\n");
    return 0;
}
