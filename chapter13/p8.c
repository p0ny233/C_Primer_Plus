#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define SLEN 40

int main(int argc, char ** argv)
{

    FILE * fp;
    char ch;
    char fpch;
    int i;
    char fileName[SLEN];
    int count;

    if (argc < 3)
    {
        fprintf(stderr, "Usage: %s character file1 file2...\n", *(argv));
        exit(EXIT_FAILURE);
    }

    ch = *(*(argv + 1));

    for (i = 2, count = 0; i < argc; i++) 
    {
        
        strcpy(fileName, *(argv + i));
        if ((fp = fopen(fileName, "r")) == NULL)
        {
            fprintf(stderr, "Can't open %s.\n", fileName);
            continue;
        }

        while ((fpch = getc(fp)) != EOF)
        {
            if (ch == fpch)
                count++;
        }

        printf("character[%c] in file[%s] appear %d.\n", ch, fileName, count);

        fclose(fp);
    }

    return 0;
}
