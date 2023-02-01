#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 40

char * s_gets(char * st, int n);
int MyatOi(char * ptr);

int main(void)
{
    char input[SIZE] = "123";
    int result; 
    char * ptr;
    ptr = s_gets(input, SIZE);
    
    if (!ptr)
    {
        puts("input error");
        return 0;
    }
    printf("%d\n", MyatOi(input));
}


int MyatOi(char * ptr)
{

    int i, j, count;
    long long a = 0;
    long long tmp = 1;
    char * input;
    input = ptr;

    while (*ptr)
    {
        if (!(isdigit(*ptr)))
        {
            puts("string contain other ascii");
            return 0;
        }
        ptr++;
    }

    count = ptr - input - 1;

    for (i = 0; i <= count; i++)
    {
        for (j = count - i, tmp = 1; j; j--)
            tmp *= 10;

        a = a + (*(input + i) - 48) * tmp;
    }


    return a;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    ret_val = fgets(st, n, stdin);

    if (ret_val)
    {
        while (*st != '\0' && *st != '\n')
            st++;
        if (*st == '\n')
            *st = '\0';
        else 
            while (getchar() != '\n');
    }

    return ret_val;
}
