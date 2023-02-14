#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char * s_gets(char *, int);

enum spectrum {red, orange, yellow, green, blue, violet};

const char * colors[] = { "red", "orange", "yellow", "green", "blue", "violet"};

#define LEN 30

int main(void)
{
    char choice[LEN];
    int color;
    int color_is_found = false;



    while (printf("Enter a color (empty line to quit):") && s_gets(choice, LEN) != NULL && *choice != '\0')
    {
        for (color = red; color <= violet; color++)
        {
            if (strcmp(choice, *(colors + color)) == 0)
            {
                color_is_found = true;
                break;
            }
        }

        if (color_is_found)
        {
            switch (color)
            {
                case red:
                    puts("Roses are red.");
                    break;
                
                case orange:
                    puts("Poppies are orange.");
                    break;
            
                case yellow:
                    puts("Sunflowers are yellow.");
                    break;
                
                case green:
                    puts("Grass is green.");
                    break;

                case blue:
                    puts("Bluebells are blue.");
                    break;

                case violet:
                    puts("Violets are violet.");
                    break;
            }

        }
        else 
            printf("I don't know about the color %s.\n", choice);

        color_is_found = false;

    }

    puts("Goodbye!");

    return 0;
}


char * s_gets(char * st, int n)
{
    char * ret_val;

    ret_val = fgets(st, n, stdin);

    if (ret_val)
    {
        while (*st != '\0' && *st != '\n')
            st++;
        if (*st == '\n')
            *st = '\0';
        else 
            while (getchar() != '\n');
    }

    return ret_val;
}
