#include <stdio.h>

int main(void)
{

    int ch_ct = 0;
    char ch;
    while ((ch = getchar()) != '#')
    {
        if (ch == '\n')
        {
            ch_ct = 0;
            continue;
        }
        ch_ct++;
        if (ch_ct % 9 == 0)
        {

            putchar('\n');
            ch_ct = 1;
        }
        putchar(ch);
        printf("-%d\t", ch);

    }

    return 0;

}
