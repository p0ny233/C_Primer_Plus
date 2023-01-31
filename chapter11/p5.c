#include <stdio.h>
#include <string.h>

char * strchar(char *, char);

#define STR "test test string"


int main(void)
{
    char * ptr;
    char c;
    while (c = getchar())
    {
        ptr = strchar(STR, c);    
        getchar();
    }

    return 0;
}

char * strchar(char * str, char c)
{

    while ( *str && *str != c)
        str++;
    
    if (!(*str))
        return NULL;

    return str;

}
