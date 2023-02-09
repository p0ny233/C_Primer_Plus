#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define SLEN 40

char * s_gets(char * st, int n);

int main(int argc, char ** argv)
{

    FILE * fp1;
    FILE * fp2;
    char fileName1[SLEN];
    char fileName2[SLEN];
    char ch1;
    char ch2;

    if (argc == 1)
    {
        printf("please input file1:");
        if (s_gets(fileName1, SLEN) == NULL)
        {
            fprintf(stderr, "input file1 error.\n");
            exit(EXIT_FAILURE);
        }

        printf("please input file2:");
        if ((s_gets(fileName2, SLEN)) == NULL)
        {
            fprintf(stderr, "input file2 error.\n");
            exit(EXIT_FAILURE);
        }

    }
    else if (argc == 3)
    {
        strcpy(fileName1, *(argv + 1));
        strcpy(fileName2, *(argv + 2));
    }
    else
    {
        fprintf(stderr, "Usage: %s fileName1 fileName2", *(argv));
        exit(EXIT_FAILURE);
    }

    if ((fp1 = fopen(fileName1, "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s.\n", fileName1);
        exit(EXIT_FAILURE);
    }
    else if ((fp2 = fopen(fileName2, "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s.\n", fileName2);
        exit(EXIT_FAILURE);
    }

    while (true)
    {
        while ((ch1 = getc(fp1)) != EOF)
        {
            if (ch1 == '\n')
                break;
            putc(ch1, stdout);
        }

        while ((ch2 = getc(fp2)) != EOF)
        {
            if (ch2 == '\n')
                break;
            putc(ch2, stdout);
        }

        if (ch1 == EOF && ch2 == EOF)
            break;

        putchar('\n');
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
        while (*st != '\n' && *st != '\0')
            st++;
        if (*st == '\n')
            *st = '\0';
        else
            while (getchar() != '\n');
    }

    return ret_val;
}
