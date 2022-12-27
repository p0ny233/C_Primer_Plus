#include <stdio.h>
#include <string.h>

#define SIZE 30
#define BUGSIZE 13

char * s_gets(char *, int);

int main(void)
{
    char flower[SIZE];
    char addon[] = "s smell like old shoes";
    char bug[BUGSIZE];

    int available;

    puts("What is your favorite flower?");
    s_gets(flower, BUGSIZE);
    
    if (strlen(addon) + strlen(flower) + 1 <= SIZE)
        strcat(flower, addon);

    puts(flower);
    puts("What is favorite bug?");
    s_gets(bug, BUGSIZE);

    available = BUGSIZE - strlen(bug) - 1;
    strncat(bug, addon, available);
    puts(bug);


    return 0;
}

char * s_gets(char * s, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(s, n, stdin);

    if (ret_val)
    {

        while (s[i] != '\n' && s[i] != '\0')
            i++;

        if (s[i] == '\n')
            s[i] = '\0';
        else 
            while (getchar() != '\n');

    }

    return s;
}
