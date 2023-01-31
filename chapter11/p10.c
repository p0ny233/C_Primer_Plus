#include <stdio.h>

char * del_space(char * s1, char * s2);

#define SIZE 40

int main(void)
{
    char s1[SIZE]; 
    char s2[SIZE];
    while (gets(s1) && puts(del_space(s1, s2)));
    return 0;
}

char * del_space(char * s1, char * s2)
{

    char * ptr;
    ptr = s2;

    while (*s1)
    {
        if (*s1 != ' ')
        {
            *s2++ = *s1;
        }
        s1++;

    }

    *s2 = '\0';

    return ptr;

}
