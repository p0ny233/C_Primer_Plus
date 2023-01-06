#include <stdio.h>
#include <string.h>

char * s_gets(char * s, int n);

#define ANSWER "Grant"
#define SIZE 40

int main(void)
{
    
    char try[SIZE];
    char * ret_val;
    int compare_result;
    int r;

    puts("Who is buried in Grant's tomp?");

    ret_val = s_gets(try, SIZE);

    while (strcmp(ret_val, ANSWER))
    {
        r = strcmp(ret_val, ANSWER);
        printf("r = %d\n", r);
        puts("No, that's wrong. Try again.");
        ret_val = s_gets(try, SIZE);
    }
    r = strcmp(ret_val, ANSWER);
    printf("r = %d\n", r);

    puts("That's right!");

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
