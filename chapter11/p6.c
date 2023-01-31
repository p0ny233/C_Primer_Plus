#include <stdio.h>

#define SIZE 40
#define INPUT "admin admin!"

int is_within(char *, char);

int main(void)
{

    char c;
    int flag;

    while (c = getchar())
    {
        getchar();
        flag = is_within(INPUT, c);
        printf("flag = %d\n", flag);
    }
    

    return 0;
}

int is_within(char * str, char c)
{
    while (*str && *str != c)
        str++;
    return *str == c;
}
