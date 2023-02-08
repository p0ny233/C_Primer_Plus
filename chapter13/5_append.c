#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFSIZE 4096
#define SLEN 81


char * s_gets(char * st, int n);
void append(FILE * src, FILE * dst);
void showContent(FILE * dst);


int main(void)
{
    FILE * fpDst, *fpSrc;
    char DstName[SLEN];
    char SrcName[SLEN];
    int files = 0;

    printf("Enter name of destination file: ");
    if ((fpDst = fopen(s_gets(DstName, SLEN), "a+")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", DstName);
        //printf("Can't open %s\n", DstName);
        exit(EXIT_FAILURE);
    }
    else if (setvbuf(fpDst, NULL, _IOFBF, BUFFSIZE) != 0)
    {
        fprintf(stderr, "Can't create memory for fpDst\n");
        //printf("Can't create memory for fpDst\n");
        exit(EXIT_FAILURE);
    }
    else
    {


        printf("Enter name of first source file (empty line to quit): ");
        while ((s_gets(SrcName, SLEN)) != NULL && *SrcName != '\0')
        {
            if (strcmp(SrcName, DstName) == 0)
                fprintf(stderr, "Can't open itself %s", SrcName);
            else if ((fpSrc = fopen(SrcName, "r")) == NULL)
            {
                fprintf(stderr, "Can't open %s\n", SrcName);
                continue;
            }
            else
            {
                if ((setvbuf(fpSrc, NULL, _IOFBF, BUFFSIZE)) != 0)
                {
                    fprintf(stderr, "Can't create memory for fpSrc\n");
                    continue;
                }

                append(fpSrc, fpDst);

                if (ferror(fpSrc) != 0)
                    fprintf(stderr, "reading %s error", SrcName);

                if (ferror(fpDst) != 0)
                    fprintf(stderr, "writing %s error", DstName);

                fclose(fpSrc);
                files++;

                fprintf(stdout, "having append %d files\n", files);
                fprintf(stdout, "Next file (empty line to quit): ");
            }
        }

        printf("Done appending. %d files appended.\n", files);
        rewind(fpDst);
        printf("%s contents:\n", DstName);
        showContent(fpDst);

        puts("Done displaying.");
        fclose(fpDst);
    }
    return 0;
}


char * s_gets(char * st, int n)
{
    char * ret_val;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (*st != '\n' && *st != '\0')
            st++;

        if (*st == '\n')
            *st = '\0';
        else 
            while (getchar() != '\n');
    }
    else
    {
        printf("input error\n");
        exit(EXIT_FAILURE);
    }
    return ret_val;
}

void append(FILE * src, FILE * dst)
{
    static char BUFF[BUFFSIZE];
    size_t bytes;

    while ((bytes = fread(BUFF, sizeof(char), BUFFSIZE, src)) > 0)
        fwrite(BUFF, sizeof(char), bytes, dst);
}

void showContent(FILE * dst)
{
    char ch;
    while((ch = getc(dst)) != EOF)
        putc(ch, stdout);
}
