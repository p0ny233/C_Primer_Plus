#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


#define SLEN 81
#define BUFFSIZE 1024

char * s_gets(char * st, int n);
void writeByte(char * addr, long bytes, FILE * fp);

int main(void)
{
    char fileName[SLEN];
    FILE * fp;
    static char BUF[BUFFSIZE];
    long bytes;
    
    printf("Please input file name: ");
    if (s_gets(fileName, SLEN) == NULL)
    {
        puts("input error");
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(fileName, "r+")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", fileName);
        exit(EXIT_FAILURE);
    }

    while ((bytes = fread(BUF, sizeof(char), BUFFSIZE, fp)) > 0)
        writeByte(BUF, bytes, fp);

    fclose(fp);
        

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
    return ret_val;
}

void writeByte(char * addr, long bytes, FILE * fp)
{
    char * ptr;
    int n;
    n = bytes;
    ptr = addr;
    
    while (bytes--)
    {
        *ptr = toupper(*ptr);
        ptr++;
    }
    //rewind(fp);

    fwrite(addr, sizeof(char), n, fp);
    
}
