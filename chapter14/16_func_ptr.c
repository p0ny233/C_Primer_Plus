#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define SLEN 81
#define DIFF ('a' - 'A')

char * s_gets(char *, int);
char showMenu();
void show();
void ToUpper(char *);
void ToLower(char *);
void Transpose(char *);
void Dummy(char *);
void eatline();



int main(void)
{
    char line[SLEN];
    char copy[SLEN];
    char choice;
    
    void(*pfunc)(char *);

    puts("Enter a string (empty line to quit):");

    while (s_gets(line, SLEN) != NULL && *line != '\0')
    {
        strncpy(copy, line, strlen(line) + 1);

        while ((choice= showMenu()) != 'n')
        {
            switch (choice)
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
            }
            show(pfunc, copy);
        }

        puts("Enter a string (empty line to quit):");
    }
    puts("Bye");

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
        puts("n) next string");
        puts("--------------  Menu  -------------------");
        printf("Your Choice: ");

        ans = getchar();
        ans = tolower(ans);
        eatline();

        while (strchr("ulton", ans) == NULL)
        {
            printf("Please enter a u, l, t, o, or n:");
            ans = tolower(getchar());
            eatline();
        }
        return ans;
    }
}

void eatline()
{
    while (getchar() != '\n');
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
