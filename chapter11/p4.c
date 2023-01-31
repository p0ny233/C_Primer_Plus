#include <stdio.h> 
#include <ctype.h> // isspace()

void getword(char * str, int n);

#define SIZE 40

int main(void)
{
    char try[SIZE];
    int num;

    puts("Please input a number to read:");
    scanf("%d", &num);
    getchar();


    puts("Please input a string: ");
    gets(try);

    getword(try, num);
    puts(try);

    return 0;
}

void getword(char * str, int n)
{
    int tmp;
    char * pstr;
    pstr = str;

    if (n > SIZE)
        return;

    *(str + n) = '\0';

    for (; n; n--, str++)
    {
        if (isspace(*str))
        {
            *str = '\0';
            break;
        }
    }



}
