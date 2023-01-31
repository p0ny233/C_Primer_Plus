#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 40
#define OPTIONS 5

void displayOrginString(char(*ptr)[SIZE], int n);
void displayAsciiOrderString(char(*ptr)[SIZE], int n);
void displayLenIncreaseString(char(*ptr)[SIZE], int n);
void displayFirstWorldLenString(char(*ptr)[SIZE], int n);
void Exit();
char * s_gets(char * s, int n);

int main(void)
{
    int a;
    int option;

    char input[OPTIONS][SIZE];
    for (a = 0; a < OPTIONS; a++)
    {
        s_gets(*(input + a), SIZE);
    }

    while (1)
    {
        puts("1. displayOrginString");
        puts("2. displayAsciiOrderString");
        puts("3. displayLenIncreaseString");
        puts("4. displayFirstWorldLenString");
        puts("5. Exit");
        printf("Please enter option: ");
        scanf("%d", &option);
        switch (option)
        {
            case 1:
                displayOrginString(input, OPTIONS);
                break;
            case 2:
                displayAsciiOrderString(input, OPTIONS);
                break;
            case 3:
                displayLenIncreaseString(input, OPTIONS);
                break;
            case 4:
                displayFirstWorldLenString(input, OPTIONS);
                break;
            case 5:
                Exit();
        }
    }
    return 0;
}

void displayOrginString(char(*ptr)[SIZE], int n)
{
    int a;
    for (a = 0; a < n; a++)
    {
        puts(*(ptr + a));
    }

}

void displayAsciiOrderString(char(*ptr)[SIZE], int n)
{
    char * arr[n];
    char * tmp;
    int i ,j;
    for (i = 0; i < n; i++)
    {
        *(arr + i) = *(ptr + i);
    }

    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
        {
            if (*(*(arr + j)) > *(*(arr + j + 1)))
            {
                tmp = *(arr + j + 1);
                *(arr + j + 1) = *(arr + j);
                *(arr + j) = tmp;
            }
        }

    for (i = 0; i < n; i++)
        puts(*(arr + i));

    putchar('\n');
}

void displayLenIncreaseString(char(*ptr)[SIZE], int n)
{
    char * arr[n];  
    int i, j;
    char * tmp;

    for (i = 0; i < n; i++)
        *(arr + i) = *(ptr + i);

    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
        {
            if (strlen(*(arr + j)) > strlen(*(arr + j + 1)))
            {
                tmp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = tmp;
            }
                
        }
    

    for (i = 0; i < n; i++)
        puts(*(arr + i));

    putchar('\n');

}

void displayFirstWorldLenString(char(*ptr)[SIZE], int n)
{
    char * arr[n];
    char * tmp;
    int i, j;


    for (i = 0; i < n; i++)
        *(arr + i) = *(ptr + i);


    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
        {
            if ((strchr(*(arr + j), ' ') - *(arr + j)) > (strchr(*(arr + j + 1), ' ') - *(arr + j + 1)))
            {
                tmp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = tmp;
            }
        }


    
    for (i = 0; i < n; i++)
        puts(*(arr + i));

    putchar('\n');
}

void Exit()
{
    puts("Program Exit. Bye!");
    exit(0);
}

char * s_gets(char * s, int n)
{
    char * ps;

    ps = fgets(s, SIZE, stdin);
    if (ps)
    {
        while (*s != '\0' && *s != '\n')
            s++;

        if (*s == '\0')
            while (getchar() != '\n');
        else
            *s = '\0';
    }

    return ps;
}



