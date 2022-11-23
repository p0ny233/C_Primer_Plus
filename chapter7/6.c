#include <stdio.h>
#define PERIOD '.'

int main(void)
{

    char ch;
    int num = 0;
    
    while ((ch = getchar()) != PERIOD )
    {
        if (ch != '"' && ch != '\'')
        {
            num++;
            putchar(ch);
        }

    }
    putchar('\n');
    printf("num = %d\n", num);

    return 0;

}
