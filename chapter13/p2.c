#include <stdio.h>
#include <stdlib.h>

#define BUFFSIZE  4096

int main(int argc, char ** argv)
{

    FILE * fpSrc;
    FILE * fpDst;
    char * srcName;
    char * dstName;
    char ch;
    long bytes;
    static char BUFF[BUFFSIZE];


    if (argc != 3)
    {
        printf("Usage: %s [srcName] [dstName]\n", *argv);
        exit(EXIT_FAILURE);
    }

    srcName = *(argv + 1);
    dstName = *(argv + 2);


    if ((fpSrc = fopen(srcName, "rb")) == NULL)
    {
        printf("Can't open %s.\n", srcName);
        exit(EXIT_FAILURE);
    }

    if ((fpDst = fopen(dstName, "wb")) == NULL)
    {
        printf("Can't open %s.\n", dstName);
        exit(EXIT_FAILURE);
    }

    while ((bytes = fread(BUFF, sizeof(char), BUFFSIZE, fpSrc)) > 0)
        fwrite(BUFF, sizeof(char), bytes, fpDst);
    
    if (ferror(fpSrc) != 0)
    {
        fprintf(stderr, "reading %s error\n", srcName);
    }

    if (ferror(fpDst) != 0)
    {
        fprintf(stderr, "writing %s error\n", dstName);
    }
    

    if (fclose(fpSrc) != 0)
    {
        fprintf(stderr, "closing %s error\n", srcName);
        exit(3);
    }
    else if (fclose(fpDst) != 0)
    {
        fprintf(stderr, "closing %s error\n", dstName);
        exit(3);
    }

    return 0;
}
