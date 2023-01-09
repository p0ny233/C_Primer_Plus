#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LIMIT 81

void ToUpper(char *);
int PunctCount(const char *);

int main(void)
{

    char line[LIMIT];
    char * val;
    char * find;
    val = fgets(line, LIMIT, stdin);
    find = strchr(val, '\n');
    if (find)
        *find = '\0';
    else 
        while (getchar() != '\n');

    ToUpper(line);

    puts(line);
    printf("That line has %d punctuation characters.\n", PunctCount(line));

    return 0;
}

void ToUpper(char * str)
{
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}

int PunctCount(const char * str)
{
    int count = 0;
    while (*str)
    {
        if (ispunct(*str))
            count++;
        str++;
    }
    return count;
}
