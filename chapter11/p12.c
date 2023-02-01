#include <stdio.h>
#include <ctype.h>

#define SIZE 40
void Count(char * str, int * islowercount, int * isdigitcount, int * isuppercount, int * ispunctcount, int * iswords);
void wordsCount(char * s, int * iswords);
char * s_gets(char * input, int n);

int main(void)
{
    int islowercount = 0;
    int isdigitcount = 0;
    int isuppercount = 0;
    int ispunctcount = 0;
    int iswords = 0;

    char input[SIZE] = "Hello Words";

    while (printf("input:") && s_gets(input, SIZE) && putchar('\n'))
    {
        Count(input, &islowercount, &isdigitcount, &isuppercount, &ispunctcount, &iswords);
        
        printf("islowercount = %d\n", islowercount);
        printf("isdigitcount = %d\n", isdigitcount);
        printf("isuppercount = %d\n", isuppercount);
        printf("ispunctcount = %d\n", ispunctcount);
        printf("iswords      = %d\n", iswords);
        putchar('\n');

    }

    puts("\nProgram Exit. Bye!");

                                             
    return 0;
}

void Count(char * str, int * islowercount, int * isdigitcount, int * isuppercount, int * ispunctcount, int * iswords)
{
    char c;
    char * ptr;
    ptr = str;

    while ( c = *str)
    {
        // 1. alpha 
        if (isalpha(c))
        {
            if (islower(c))
                 (*islowercount)++;
            else
                (*isuppercount)++;
        }

        // 2. punct
        else if (ispunct(c))
            (*ispunctcount)++;
        // 3. digit
        else if (isdigit(c))
            (*isdigitcount)++;

        str++;
    }

    wordsCount(ptr, iswords);

}

void wordsCount(char * s, int * iswords)
{
    int flag = 0;

    while (*s)
    {
        if (isalpha(*s))
            flag = 1;

        else if (isspace(*s))
        {
            if (flag)
                (*iswords)++;

            flag = 0;

        }

        s++;
    }
    if (flag)
        (*iswords)++;
}

char * s_gets(char * input, int n)
{
    char * ps;
    ps = fgets(input, n, stdin);
    input = ps;

    if (ps)
    {
        printf("content:");
        puts(ps);

        while (*ps != '\0' && *ps != '\n')
            ps++;

        if (*ps == '\n')
           *ps = '\0';
        else 
            while (getchar() != '\n');
    }

    return input;
}
