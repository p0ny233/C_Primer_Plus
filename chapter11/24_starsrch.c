#include <stdio.h>
#include <string.h>

#define LISTSIZE 8

int main(void)
{
    const char * list[LISTSIZE] = 
    {
        "astronomy", "astounding",
        "astrophysics", "ostracize",
        "asterism", "astrophobia",
        "ast123", "ast123321"
    };

    int count = 0;
    int i;

    for (i = 0; i < LISTSIZE; i++)
        if (strncmp(*(list + i), "ast123", 17) == 0)
        {
            printf("Found: %s\n", *(list + i));
            count++;
        }


    //printf("The list contained %d words beginning with astro.\n", count);
    printf("The list contained %d words beginning with ast123.\n", count); // only print "ast123", not print "ast123321"


    return 0;
}
