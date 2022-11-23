#include <stdio.h>

int main(void)
{
    int start;
    int end;


    scanf("%d", &start);
    scanf("%d", &end);

    for (; start <= end; start++)
    {
        printf("%d\t%d\t%d", start, start * start, start * start * start);
        printf("\n");
    }


    
    return 0;

}
