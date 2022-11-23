#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define STOP '|'


int main(void)
{
    
    int n_line = 0;
    int n_word = 0;
    long n_char = 0;
    bool inword = false;

    char ch;

    while ((ch = getchar()) != STOP)
    {
        n_char++;
        if (ch == '\n')
            n_line++;

        if (!isspace(ch) && !inword)
        {
            inword = true;
            n_word++;
        }

        if (isspace(ch) && inword)
            inword = false;

    }

    printf("characters = %ld, words = %d, lines = %d.\n", n_char, n_word, n_line); 

    return 0;

}
