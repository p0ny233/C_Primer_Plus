#include <stdio.h>

char * func(char *, char);

int main(void)
{
    char *(*pfunc)(char *, char);
    pfunc = func;

    char str[] = "123";
    func(str, '1');



}

char * func(char * s, char c)
{
    char * ret_val;

    printf("%s", s);

    return ret_val;
}
