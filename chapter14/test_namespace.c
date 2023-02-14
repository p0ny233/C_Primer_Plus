#include <stdio.h>

#define SLEN 30

char * s_gets(char * st, int n);

struct library {
    char fileName[SLEN];
    char author[SLEN];
    float value;
} library;


int main(void)
{   
    
    s_gets(library.fileName, SLEN);
    s_gets(library.author, SLEN);
    fscanf(stdin, "%f" ,&library.value);

    printf("file name :  %s\n", library.fileName);
    printf("author : %s\n", library.author);
    printf("value : %f\n", library.value);


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
