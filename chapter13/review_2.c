#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, char ** argv)
{

    FILE * fp;
    char ch;

    if (argc < 2)
        exit(1);

    if ((fp = fopen(*(argv + 1), "r")) == NULL)
    {
        fprintf(stdout, "Can't open %s\n", *(argv + 1));
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(fp)) != EOF)
    {
        if (isdigit(ch))
            putc(ch, stdout);
        
    }

    fclose(fp);

    return 0;

}
