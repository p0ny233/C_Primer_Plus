#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFSIZE 1024
#define SLEN 81

void append(FILE * fpSrc, FILE * fpDst);

int main(int argc, char ** argv)
{
    char dstFileName[SLEN];
    char srcFileName[SLEN];
    FILE * fpDst;
    FILE * fpSrc;
    int i;


    if (argc < 3)
    {
        printf("Usage: %s destFileName SrcFileName1 SrcFileName2 ..\n", *(argv));
        exit(EXIT_FAILURE);
    }
    strcpy(dstFileName, *(argv + 1));
    
    if ((fpDst = fopen(dstFileName, "a+")) == NULL)
    {
        fprintf(stderr, "Can't open destFile %s.\n", dstFileName);
        exit(EXIT_FAILURE);
    }

    if (setvbuf(fpDst, NULL, _IOFBF, BUFFSIZE) != 0)
    {
        fprintf(stderr, "create buffer for destination file is error\n");
        exit(EXIT_FAILURE);
    }


    // loop commandline arguments
    for (i = 2; i < argc; i++)
    {
        if (strcmp(dstFileName, *(argv + i)) == 0)
            continue;

        strcpy(srcFileName, *(argv + i));

        if ((fpSrc = fopen(srcFileName, "r")) == NULL)
        {
            fprintf(stderr, "Can't open srcFile %s.\n", srcFileName);
            continue;
        }

        if (setvbuf(fpSrc, NULL,_IOFBF, BUFFSIZE) != 0)
        {
            fprintf(stderr, "create buffer for source file is error");
            exit(EXIT_FAILURE);
        }

        append(fpSrc, fpDst);


        if (ferror(fpSrc) != 0)
        {
            fprintf(stderr, "reading %s error.\n", srcFileName);
        }

        if (ferror(fpDst) != 0)
        {
            fprintf(stderr, "wrting %s error.\n", dstFileName);
        }

        fclose(fpSrc);


    }

    fclose(fpDst);
    return 0;

}

void append(FILE * fpSrc, FILE * fpDst)
{
    static char buff[BUFFSIZE];
    size_t bytes;

    while (((bytes = fread(buff, sizeof(char), BUFFSIZE, fpSrc))))
    {
        fwrite(buff, sizeof(char), bytes, fpDst);
    }
}
