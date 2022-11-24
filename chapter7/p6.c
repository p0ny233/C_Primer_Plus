#include <stdio.h>

int main(void)
{

    char cur_ch, last_ch;
    cur_ch = last_ch = '\0';
    int ct;

    while ((cur_ch = getchar()) != '#')
    {
        if (last_ch == '\0')
        {
            last_ch = cur_ch;
            continue;
        }

        if (cur_ch == 'i' && last_ch == 'e')
            ct++;

        last_ch = cur_ch;
    }

    printf("ct = %d\n", ct);

    
    return 0;

}
