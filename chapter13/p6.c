#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define SLEN 40

char * s_gets(char * st, int n);

int main(void)
{
    FILE * fp1;
    FILE * fp2;
    char originFileName[SLEN];
    char dstFileName[SLEN];
    long i;
    char ch;

    printf("input origin file:");

    if (s_gets(originFileName, SLEN) == NULL)
    {
        fprintf(stderr, "input error\n");
        exit(EXIT_FAILURE);
    }

    if ((fp1 = fopen(originFileName, "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", originFileName);
        exit(EXIT_FAILURE);
    }

    strcpy(dstFileName, originFileName);
    dstFileName[SLEN - 5] = '\0';
    strcat(dstFileName, ".red");

    if ((fp2 = fopen(dstFileName, "w")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", dstFileName);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(fp1)) != EOF)
    {
        if (i % 3 == 0)
        {
            putc(ch, fp2);
        }

        i++;
    }

    fclose(fp1);
    fclose(fp2);

    return 0;

}

char * s_gets(char * st, int n)
{
    char * ret_val;

    ret_val = fgets(st, n, stdin);

    if (ret_val)
    {
        while (*st != '\0' && *st != '\n')
            st++;
        if (*st == '\n')
            *st = '\0';
        else
            while (getchar() != '\n');
    }

    return ret_val;
}
