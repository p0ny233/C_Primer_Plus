#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define SIZE 40

void show_words(char ** pptr, int n);
char * s_gets(char * s, int n);

int main(void)
{

    char input[SIZE];
    int words;
    int i;
    int len;  // word len
    char * inputTmp;

    char ** pptr;

    printf("How many words do you wish to enter? ");
    scanf("%d", &words);
    getchar();

    printf("Enter %d words now\n", words);
    s_gets(input, SIZE);
    pptr = (char **)malloc(words * (sizeof(char *)));

    if (!pptr)
        exit(EXIT_FAILURE);

    inputTmp = input;

    for (i = 0; i < words; i++)
    {

        if (!(words - i - 1))
            len = strchr(inputTmp, '\0') - inputTmp;
        else
            len = strchr(inputTmp, ' ') - inputTmp;

        *(pptr + i) = (char *)malloc(len + 1);
        *(*(pptr + i) + len) = '\0';

        strncpy(*(pptr + i), inputTmp, len);

        inputTmp = inputTmp + len + 1;

    }

    show_words(pptr, words);
    

    return 0;
}


char * s_gets(char * s, int n)
{
    char * ptr;
    ptr = fgets(s, n, stdin);

    if (!ptr)
        exit(EXIT_FAILURE);

    while (*s != '\n' && *s != '\0')
        s++;

    if (*s == '\n')
        *s = '\0';
    else
        while (getchar() != '\n');

    return ptr;
}


void show_words(char ** pptr, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%s\n", *(pptr + i));
    }

}
