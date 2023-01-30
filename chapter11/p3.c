#include <stdio.h> 
#include <ctype.h> // isspace()

void getword(char * str);

#define SIZE 40

int main(void)
{
    char try[SIZE];

    puts("Please input a string: ");
    gets(try);

    getword(try);
    puts(try);

    return 0;
}

void getword(char * str)
{
    int tmp;
    char * pstr;
    pstr = str;

    for (tmp = 0; tmp < SIZE; str++)
    {

        if (isspace(*str))
        {
            *str = '\0';
            break;
        }

    }


}
