#include <stdio.h>

int main(void)
{

    char ch, last, cur;
    
    int space_ct, n_ct, o_ct;
    space_ct = n_ct = o_ct = 0;

    while ((cur = ch = getchar()) != '#')
    {
        printf("last = %c, cur = %c\n", last, cur);
        if (ch == '\n')
            n_ct++;
        else if (ch == ' ')
            space_ct++;
        else 
            o_ct++;

        last = cur;
        

    }
    printf("space_ct = %d\nn_ct = %d\no_ct = %d\n", space_ct, n_ct, o_ct);

    return 0;

}
