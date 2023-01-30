#include <stdio.h>

#define SIZE 30

char * search_space_ascii(char *, char);

int main(void)
{
    char * pos;
    char name[SIZE] = "admin111 asdmia";
    pos = search_space_ascii(name, ' ');
    printf("name = %p, pos = %p\n",name ,pos);

    return 0;
}

char * search_space_ascii(char * s1, char c)
{
    char * pos;
    pos = s1;

    while (*pos++)
        if (*pos == c)
            return pos;

    return NULL;
}
