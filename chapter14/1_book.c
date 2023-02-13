#include <stdio.h>
#include <string.h>

char * s_gets(char * st, int n);

#define MAXTITL 41
#define MAXAUTL 31


struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};


int main(void)
{
    struct book library;

    printf("Please enter the book title.\n");

    s_gets(library.title, MAXTITL);

    printf("Please enter the author.\n");
    s_gets(library.author, MAXAUTL);

    printf("Now enter the author.\n");
    fscanf(stdin, "%f", &library.value);

    printf("%s by %s: $%.2f\n", library.title, library.author, library.value);

    printf("%s: \"%s\" ($%.2f)\n", library.author, library.title, library.value);

    printf("Done.\n");

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
