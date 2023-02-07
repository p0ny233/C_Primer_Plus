#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN 40

int main(int argc, char ** argv)
{


    FILE * in, *out;
    char ch;
    char name[LEN];
    int count;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s filename", argv[0]);
        exit(EXIT_FAILURE);
    }

        
    // set in
    if ((in = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "I couldn't open the file %s\n", argv[1]);
        exit(EXIT_FAILURE);

    }
    

    // set out
    // strncpy(name, argv[1], strlen(argv[1]) + 1);
    if (strlen(argv[1]) > 35)
        name[LEN - 5] = '\0';

    strncpy(name, argv[1], LEN - 5);
    strcat(name, ".red");

    if ((out = fopen(name, "w")) == NULL)
    {
        fprintf(stderr, "I couldn't open the file %s\n", argv[2]);
        exit(3);
    }

    while ((ch = getc(in)) != EOF ) 
    {
        if (count % 3 == 0)
            putc(ch, out);
        count++;
    }

    if (fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, "Error in closing files.\n");

    return 0;
}
