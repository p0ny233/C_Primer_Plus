#include <stdio.h>
#include <stdlib.h>


int main(int argc, char ** argv)
{
    int i;
    char ch;
    FILE * fp;
    if (argc < 2)
    {
        printf("Usage: %s filename1 filename2 ...\n");
        exit(EXIT_FAILURE);
    }


    for (i = 1; i <= argc - 1; i++)
    {
        if ((fp = fopen(*(argv + i), "r")) == NULL)
        {
            fprintf(stderr, "Can't open %s\n", *(argv + i));
            continue;
        }

        printf("%s displaying\n", *(argv + i));
        while ((ch = getc(fp)) != EOF)
            putc(ch, stdout);
        printf("%s Done display\n", *(argv + i));
    }

    return 0;
}
