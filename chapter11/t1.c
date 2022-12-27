#include <stdio.h>

#define LEN 10

int main(void)
{

    char words[LEN];
    char name[LEN];
    char * pt;
    int len;
    pt = fgets(words, LEN, stdin);

    len = fputs(words, stdout);


    return 0;
}
