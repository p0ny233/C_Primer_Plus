#include <stdio.h>
void postfix_incre(void);
void prefix_incre(void);


int main(void)
{
    postfix_incre();
    prefix_incre();
    return 0;
}

void postfix_incre(void)
{
    char c;
    char * ptr;
    char strs[] = "Hello";
    ptr = strs;
    c = *(ptr++);

}

void prefix_incre(void)
{
    char c;
    char * ptr;
    char strs[] = "Hello";
    ptr = strs;
    c = *(++ptr);

}
