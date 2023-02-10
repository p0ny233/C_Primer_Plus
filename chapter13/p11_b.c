#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SLEN 41
#define MAX 255

int main(int argc, char ** argv)
{
    char fileName[SLEN];
    char substr[MAX];
    char line[MAX];
    FILE * fp;

    if (argc < 3)
    {
        fprintf(stderr, "Usage: %s substr fileName\n", *argv);
        exit(EXIT_FAILURE);
    }


    strcpy(fileName, *(argv + 2));
    if ((fp = fopen(fileName, "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", fileName);
        exit(EXIT_FAILURE);
    }
    strcpy(substr, *(argv + 1));
    while (fgets(line, MAX, fp) != NULL)
    {
        if (strstr(line, substr))
        {
            fputs(line, stdout);
        }
    }

    return 0;
}
