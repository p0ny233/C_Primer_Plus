#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 256

int main(int argc, char ** argv)
{
    FILE * fp;
    char ch;
    char line[SIZE];


    if (argc != 3)
    {
        fprintf(stderr, "Usage: ./a.out character filename\n");
        exit(EXIT_FAILURE);
    }
    ch = *(argv[1]);

    if ((fp = fopen(*(argv + 2), "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s", *(argv + 2));
        exit(EXIT_FAILURE);
    }

    while (fgets(line, SIZE, fp) != NULL)
    {
        if (strchr(line, ch))
        {
            fputs(line, stdout);
        }
    }

    return 0;
}
