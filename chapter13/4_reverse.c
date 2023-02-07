#include <stdio.h>
#include <stdlib.h>


int main(int argc, char ** argv)
{
    FILE * fp;
    char ch;
    long int count;
    int result;
    int i;


    if (argc != 2)
    {
        printf("Usage: %s filename", argv[0]);
        exit(EXIT_FAILURE);
    }


    if ((fp = fopen(argv[1], "rb")) == NULL)
    {
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }


    result = fseek(fp, 0L, SEEK_END);
    if (result)
    {
        printf("fseek Failed\n");
        exit(EXIT_FAILURE);
    }

    count = ftell(fp);
    
    for (i = 1L; i <= count; i++)
    {
        fseek(fp, -i, SEEK_END);   
        ch = getc(fp);
        putc(ch, stdout);
    }

    fclose(fp);
    return 0;
}
