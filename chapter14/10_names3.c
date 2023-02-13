#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define NLEN 30

struct namect {
    char * fname;
    char * lname;
    int letters;
};


char * s_gets(char * st, int n);
void getinfo(struct namect * pst);
void showinfo(const struct namect);
struct namect makeinfo(struct namect);
void cleanup(void * pst);

int main(void)
{
    struct namect person;

    getinfo(&person);
    person = makeinfo(person);
    showinfo(person);
    
    cleanup(person.fname);
    cleanup(person.lname);

    return 0;
}

void getinfo(struct namect * pst)
{
    char temp[NLEN];

    printf("Please enter your first name.\n");
    s_gets(temp, NLEN);
    pst->fname = (char *)malloc(strlen(temp) + 1);
    strncpy(pst->fname, temp, strlen(temp) + 1);

    printf("Please enter your last name.\n");
    s_gets(temp, NLEN);
    pst->lname = (char *)malloc(strlen(temp) + 1);
    strncpy(pst->lname, temp, strlen(temp) + 1);

}

struct namect makeinfo(struct namect info)
{
    info.letters = strlen(info.fname) + strlen(info.lname);
    return info;
}

void showinfo(const struct namect info)
{
    printf("%s %s, your name contains %d letters.\n", info.fname, info.lname, info.letters);
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

void cleanup(void * pst)
{
    free(pst);
}
