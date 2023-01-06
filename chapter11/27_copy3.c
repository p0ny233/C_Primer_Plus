#include <stdio.h>
#include <string.h>

#define LIM 5
#define SIZE 40
#define TARGSIZE 7

char * s_gets(char *, int);

int main(void)
{
    char qwords[LIM][TARGSIZE];
    char temp[SIZE];
    int i = 0;

    printf("Enter %d word beginning with q:\n", LIM);


    while (i < LIM && s_gets(temp, SIZE))
    {
        if (strncmp(temp, "q", 1) == 0)
        {
            strncpy(*(qwords + i), temp, TARGSIZE - 1);
            (*(qwords + i))[TARGSIZE - 1] = '\0';
            i++;

        }
        else 
            printf("%s doesn't begin with q!\n", temp);

    }

    puts("Here are the words accepted:");
    for (i = 0; i < LIM; i++)
        puts(*(qwords + i));

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
