#include <stdio.h>
#include <ctype.h>

#define SIZE 40
#define ANSWER "Grant"

char * s_gets(char *, int);


int main(void)
{
    char try[SIZE];
    char * s1;
    char * s2;

    puts("Who is buried in Grant's tomb?");
    while (1)
    {
        s2 = s_gets(try, SIZE);
        s1 = ANSWER;

        while (*s1 && *s2 && tolower(*s1++) == tolower(*s2++));

        if (*s1 == *s2 && *s2 == '\0')
        {
            puts("That's right!");
            break;
        }
        else 
            puts("No, that's wrong. Try agin.");
    }



    return 0;
}

char * s_gets(char * st, int n)
{
    char * ptr;

    ptr = fgets(st, n, stdin);
    if (ptr)
    {
        while (*st != '\0' && *st != '\n')
            st++;
        if (*st == '\n')
            *st = '\0';
        else 
            while (getchar() != '\n');
    }

    return ptr;

}
