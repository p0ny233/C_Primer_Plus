#include <stdio.h>
#include <string.h>

#define SIZE 80
#define LIM 10
#define STOP "quit"

char * s_gets(char *, int);

int main(void)
{

    int ct = 0;
    char word[SIZE];
    char word2[LIM][SIZE];
    char * ret;
    
    /* 
     eg 1
    while (ret = s_gets(word, SIZE))
    {
        puts(word);

        if (!strcmp(ret, STOP))
            break;
    }
    */

    // eg 2
    printf("Enter up to %d lines (type quit to quit):\n", LIM);

    while (ct < LIM && s_gets(word2[ct], SIZE) && strcmp(word2[ct], STOP) != 0)
        ct++;

    printf("%d strings entered \n", ct);



    return 0;
}

char * s_gets(char * st, int n)
{

    char * ret_val = fgets(st, SIZE, stdin);
    char ch;

    if (ret_val)
    {
        while(*st != '\n' && *st != '\0')
            st++;

        if (*st == '\n')
            *st = '\0';
        else 
            while ((ch = getchar()) != '\n');
    }

    return ret_val;

}
