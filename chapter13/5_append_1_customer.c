#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

char * s_gets(char * st, int n);
void ShowSrcFileNameFromArr(char ** arr, int n);
void destoryMalloc(char ** arr, int n);
void superAppend(FILE * fpDst, char ** pArrSrcFileList ,int num, char * pDstFileName);
void ShowContent(FILE * fp);


int main(void)
{
    char pDstFileName[SIZE];
    char tmpFileName[SIZE];
    char ** pArrSrcFileList;
    FILE * fpDst;
    FILE * fpSrc;
    int num;
    int i, j;


    printf("Please enter dest file path: ");

    if ((fpDst = fopen(s_gets(pDstFileName, SIZE), "a+")) == NULL)
    {
        printf("Can't open %s", pDstFileName);
        exit(EXIT_FAILURE);
    }

    printf("Please enter how many you want append files: ");
    scanf("%d", &num);
    getchar();  // notice
    printf("you want append %d files\n", num);

    pArrSrcFileList = (char **)malloc(num * sizeof(char *));

    if (!pArrSrcFileList)
    {
        printf("malloc memory error");
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < num; i++)
    {
        printf("File %d: ", i + 1);
        s_gets(tmpFileName, SIZE);
        *(pArrSrcFileList + i) = (char *)malloc(strlen(tmpFileName) + 1);
        strncpy(*(pArrSrcFileList + i), tmpFileName, strlen(tmpFileName) + 1);
    }

    ShowSrcFileNameFromArr(pArrSrcFileList, num);


    // --- 

    superAppend(fpDst, pArrSrcFileList, num, pDstFileName);


    ShowContent(fpDst);

    fclose(fpDst);


    destoryMalloc(pArrSrcFileList, num);

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (*st != '\0' && *st != '\n')
            st++;

        if (*st == '\0')
            while (getchar() != '\n');
        else
            *st = '\0';
    }
    else
    {
        printf("input error");
        exit(EXIT_FAILURE);
    }

    return ret_val;

}


void ShowSrcFileNameFromArr(char ** arr, int n)
{
    int i;

    for (i = 0; i < n; i++ )
        printf("%s\n", *(arr + i));
}

void destoryMalloc(char ** arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        free(*(arr + i));
    }
    free(arr);
}



void superAppend(FILE * fpDst, char ** pArrSrcFileList ,int num, char * pDstFileName)
{
    FILE * fp;
    int i;

    char * buff;
    int readBytes;
    char name[SIZE];
    buff = (char *)malloc(8);

    if (!buff)
    {
        printf("buffer malloc error!\n");
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < num; i++)
    {
        strcpy(name, *(pArrSrcFileList + i));
        if ((fp = fopen(name, "r")) == NULL)
        {
            printf("Can't open %s\n", *(pArrSrcFileList + i));
            continue;
        }

        if (strcmp(pDstFileName, *(pArrSrcFileList + i))  == 0)
            continue;

        while ((readBytes = fread(buff, sizeof(short), 4, fp)) > 0)
        {
            fwrite(buff, sizeof(short), readBytes, fpDst);
        }
        
    }

}


void ShowContent(FILE * fp)
{
    char ch;
    if (fp)
    {
        rewind(fp);

        while ((ch = getc(fp)) != EOF)
            putc(ch, stdout);

    }
}
