#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define SLEN 40
#define DIFF ('a' - 'A')

char * s_gets(char *, int);
char showMenu();
void show();
void ToUpper(char *);
void ToLower(char *);
void Transpose(char *);
void Dummy(char *);


int main(void)
{
    char string1[SLEN];
    char string2[SLEN];
    char select;
    
    void(*pfunc)(char *);

next:

    printf("Please input string:\n") && (s_gets(string1, SLEN) != NULL) && *string1 != '\0';

    while (true)
    {
        strncpy(string2, string1, strlen(string1) + 1);

        select = showMenu();

        switch (select)
        {
            case 'u':
                pfunc = ToUpper;
                break;
            case 'l':
                pfunc = ToLower;
                break;
            case 't':
                pfunc = Transpose;
                break;
            case 'o':
                pfunc = Dummy;
                break;
            case 'q':
                puts("Bye");
                exit(EXIT_SUCCESS);
            case 'n':
                goto next;
        }
        
        show(pfunc, string2);
    }

    return 0;
}

char showMenu()
{
    char ans;

    while (true)
    {
        puts("--------------  Menu  -------------------");
        puts("u) uppercase        l) lowercase");
        puts("t) transposed case  o) original case");
        puts("n) next string      q) quit");
        puts("--------------  Menu  -------------------");
        printf("Your Choice: ");
        fscanf(stdin, "%c", &ans);
        getchar();

        if (strchr("ultonq", ans) == NULL)
        {
            printf("Please select correct option\n\n");
            continue;
        }
        return ans;
    }
}

void ToUpper(char * st)
{
    while (*st) 
    {
        *st = toupper(*st);         
        st++;
    }
}

void ToLower(char * st)
{
    while (*st)
    {
        *st = tolower(*st);
        st++;
    }
}

void Transpose(char * st)
{
    char c;
    while ((c = *st))
    {
        if (c >= 'A' && c <= 'Z')
            *st = c + DIFF;
        else if (c >= 'a' && c <= 'z')
            *st = c - DIFF; 
        st++;
    }
}

void Dummy(char *) 
{
    return;
}

void show(void (*func)(char *), char * str)
{
    func(str);
    puts(str);
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
