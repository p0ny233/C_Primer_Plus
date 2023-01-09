#include <stdio.h>
#include <string.h>

#define SIZE 81
#define LIM 20
#define HALT ""

char * s_gets(char *, int);
void stsrt(char * strings[], int);

int main(void)
{
    char input[LIM][SIZE];
    char * pstrings[LIM];
    int ct = 0;
    int i = 0;

    while (ct < LIM && s_gets(input[ct], SIZE) && input[ct][0] != '\0')
    {
        pstrings[ct] = input[ct];
        ct++;
    }

    for (; i < ct; i++)
        puts(pstrings[i]);

    return 0;
}
char * s_gets(char * st, int n)
{

    char * ret_val;
    ret_val = fgets(st, n, stdin);

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

void stsrt(char * strings[], int ct)
{
    int top, seek;
    char * tmp;
    for (top = 0; top < ct - 1; top++)
        for (seek = top + 1; seek < ct; seek++)
        {
            if (strcmp(strings[top], strings[seek]) > 0)
            tmp = strings[top];
            strings[top] = strings[seek];
            strings[seek] = tmp;
        }
}
