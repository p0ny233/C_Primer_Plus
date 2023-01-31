#include <stdio.h>
#include <string.h>

char * resever_string(char * s);

#define SIZE 40

int main(void)
{
    char s[SIZE];
    
    while (gets(s) && resever_string(s))
        puts(s);

    return 0;
}

char * resever_string(char * s)
{
    char * start_ptr;
    char * end_ptr;
    int n;
    end_ptr = s + strlen(s);
    start_ptr = s;
    
    for (n = 0; n < (end_ptr - start_ptr) / 2; n++)
    {
       *(start_ptr + n) = *(start_ptr + n) ^ *(end_ptr - n - 1);

       *(end_ptr - n - 1) = *(start_ptr + n) ^ *(end_ptr - n - 1);

       *(start_ptr + n) = *(start_ptr + n) ^ *(end_ptr - n - 1);

    }
    return s;
}
