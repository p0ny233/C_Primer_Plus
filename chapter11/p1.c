#include <stdio.h> 

#define SIZE 40

int main(void)
{
    char try[SIZE];
    fgets(try, SIZE, stdin);

    fputs(try, stdout);

    return 0;
}
