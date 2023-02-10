#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SLEN 41
#define LINELEN 255

void findSubStr(FILE * fp, char * substr);

int main(int argc, char ** argv)
{
    FILE * fp;
    char fileName[SLEN];
    char substr[SLEN];
    


    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s SubString fileName", *(argv));
        exit(EXIT_FAILURE);
    }

    strcpy(fileName, *(argv + 2));
    strcpy(substr, *(argv + 1));

    if ((fp = fopen(fileName, "r")) == NULL)
    {
        fprintf(stderr, "Can't open %s error.\n", fileName);
        exit(EXIT_FAILURE);
    }

    findSubStr(fp, substr);

    return 0;
}

void findSubStr(FILE * fp, char * substr)
{
    size_t len = 0;
    char ch;
    char * pos;
    len = strlen(substr);
    unsigned long offset = 0;

    pos = (char *)malloc(len + 1);

    while ((ch = getc(fp)) != EOF)
    {
        if (ch == '\n')
            offset = ftell(fp);

        if (ch == *substr)
        {
            ungetc(ch, fp);
            fread(pos, sizeof(char), len, fp);

            if(strncmp(pos, substr,len) == 0)
            {
                fseek(fp, offset, SEEK_SET);
                while ((ch = (getc(fp))) != '\n')
                    putc(ch, stdout);
                putchar('\n');
                offset = ftell(fp);
            }

        }

    }

}
