#include <stdio.h> 

void getnword(char * str, int len);

#define SIZE 40

int main(void)
{
    char try[SIZE];
    int num;

    puts("Please input a number you want to read: ");

    scanf("%d", &num);
    getchar();

    puts("Please input a string: ");
    gets(try);

    getnword(try, num);
    puts(try);


    return 0;
}

void getnword(char * str, int len)
{
    int tmp;
    char * pstr;
    pstr = str;
    tmp = len;
    for (; len; len--)
    {
        if (*str++ == '\0')
            break;

    }
    if (!len)
    {
        pstr[tmp] = '\0';
    }

}
