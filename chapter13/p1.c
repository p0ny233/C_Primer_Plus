#include <stdio.h>
#include <stdlib.h>

#define SLEN 81

char * s_gets(char * st, int n);

int main(void)
{
    FILE * fp;
    int count;
    char filename[SLEN];
    char ch;

    printf("Please input file name: ");
    if (s_gets(filename, SLEN) == NULL)
    {
        printf("input error");
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(filename, "r")) == NULL)
    {
        printf("Can't open %s\n", filename);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);
        count++;
    }

    fclose(fp);
    printf("File %s has %lu characters\n", filename, count);

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
