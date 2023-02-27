#include <stdio.h>
#include "6_names_st.h"


void get_names(names * pn)
{
    printf("Please enter your first name: ");
    s_gets(pn->fname, SLEN);

    printf("Please enter your last name: ");
    s_gets(pn->lname, SLEN);
}

void show_names(const names * pn)
{
    printf("%s %s", pn->fname, pn->lname);
}

char * s_gets(char * st, int n)
{
    char * ret_val;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (*st != '\n' && *st != '\0')
            st++;
        if (*st == '\n')
            *st = '\0';
        else 
            while (getchar() != '\n');
    }
    return ret_val;
}
