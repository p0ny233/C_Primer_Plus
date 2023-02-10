#include <stdio.h>
#include <stdlib.h>


#define SLEN 40

char * s_gets(char * st, int n);


int main(void)
{
    FILE * fp;
    char name[SLEN];
    char ch;
    unsigned long offset;


    if (s_gets(name, SLEN) == NULL)
    {
        fprintf(stderr, "input error\n");
        exit(EXIT_FAILURE);
    }


    if ((fp = fopen(name, "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s.\n", name);
        exit(EXIT_FAILURE);
    }

    while (printf("Please enter file offset:"), fscanf(stdin, "%u", &offset) == 1 && (offset >= 0))
    {
        fseek(fp, offset, SEEK_SET);

        while ((ch = getc(fp)) != EOF)
        {
            putc(ch, stdout);
            if (ch == '\n')
                break;
        }
    }

    fclose(fp);


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
