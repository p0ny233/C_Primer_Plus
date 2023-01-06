#include <stdio.h>
#include <string.h>

#define SIZE 40
#define LIM 5

char * s_gets(char *, int);

int main(void)
{
    char tmp[SIZE];
    char dst[LIM][SIZE];
    int ct = 0;
    int i = 0;

    printf("Enter %d words beginning with q:\n", LIM);

    while (ct < LIM && s_gets(tmp, SIZE))
    {
        if (*tmp == 'q')
        {
            strcpy(*(dst + ct), tmp);
            i++;
            ct++;
        }
        else
            printf("%s doesn't begin with q!\n", tmp);

    }

    for (ct = 0; ct < LIM; ct++)
    {
        printf("string: %s\n", *(dst + ct));
    }

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;

    ret_val = fgets(st, SIZE, stdin);

    if (ret_val)
    {
        while (*st != '\n' && *st != '\0')
            st++;
        if (*st == '\n')
            *st = '\0';
        else 
            while (getchar() != '\n');
    }
    return ret_val;
}
