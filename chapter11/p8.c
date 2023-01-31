#include <stdio.h>
#include <string.h>

#define SIZE 40

char * string_in(char *, char *);

int main(void)
{
    char s1[SIZE];
    char s2[SIZE];
    
    while ((printf("s1:"), gets(s1)) , getchar() && gets(s2))
    printf("result = %p\n", string_in("hats", "at"));

    return 0;
}


char * string_in(char *s1, char *s2)
{
    char * pstr1;
    char * pstr2;
    int tmp;
    int match = 1;

    if (strlen(s1) < strlen(s2))
        return NULL;
    pstr1 = s1;
    pstr2 = s2;

    char * p_match_char = strchr(pstr1, *pstr2);
    for (tmp = 1; tmp < strlen(s2); tmp++)
        if (*(pstr2 + tmp) != *(p_match_char + tmp))
            match = 0;
    return match ? p_match_char : NULL;
}
