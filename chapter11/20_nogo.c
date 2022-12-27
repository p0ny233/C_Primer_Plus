#include <stdio.h>

char * s_gets(char * s, int n);

#define ANSWER "Grant"
#define SIZE 40

char * s_gets(char * s, int n);

int main(void)
{

    char try[SIZE];

    puts("Who is buried in Grant's tomb");
    s_gets(try, SIZE);
    while (try != ANSWER)
    {
        puts("No, that's wrong. Try again.");
        s_gets(try, SIZE);
    }

    puts("That's rigth!");


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
