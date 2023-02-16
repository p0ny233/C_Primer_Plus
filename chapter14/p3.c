#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * s_gets(char *, int n);

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

void sortByOrigin(struct book * library, int n);
void sortByLetter(struct book * library, int n);
void sortByPrice(struct book * library, int n);


int main(void)
{
    struct book library[MAXBKS];
    int count = 0;
    int index;

    printf("Please enter the book title.\n");
    printf("Press [enter] at the start of a line to stop.\n");
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
    {
        printf("Now enter the author.\n");
        s_gets(library[count].author, MAXAUTL);

        printf("Now enter the value.\n");
        fscanf(stdin, "%f", &library[count++].value);

        while (getchar() != '\n');

        if (count < MAXBKS)
            printf("Enter the next title.\n");
    }

    if (count > 0)
    {
        printf("Here is the list of your books:\n");

        /*
        printf("sortByOrigin\n");
        sortByOrigin(library, count);

        printf("\nsortByLetter\n");
        sortByLetter(library, count);
        */
        printf("\nsortByPrice\n");
        sortByPrice(library, count);

    }
    else 
        printf("No books? Too bad.\n");


    

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


void sortByOrigin(struct book * library, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%s by %s: $%.2f\n", library[i].title, library[i].author, library[i].value);
}

                                                
void sortByLetter(struct book * library, int n)
{
    int i,j;
    size_t size;
    size = sizeof(struct book) * n;
    struct book * library_arr[n];
    struct book * ptr;
    struct book * plibrary = (struct book *)malloc(size);
    memcpy(plibrary, library, size);

    //get struct pointer to add array
    for (i = 0; i < n; i++)
    {
        *(library_arr + i) = plibrary + i;
    }

    // compare
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (*((*(library_arr + j + 1))->title) < *((*(library_arr + j))->title))   
            {
                ptr = *(library_arr + j + 1);
                *(library_arr + j + 1) = *(library_arr + j);
                *(library_arr + j) = ptr;
            }
        }
    }

    // output
    for (i = 0; i < n; i++)
    {
        printf("%s by %s: $%.2f\n", (*(library_arr + i))->title, (*(library_arr + i))->author, (*(library_arr + i))->value);
    }

    free(plibrary);
}

void sortByPrice(struct book * library, int n)
{
    int i, j;
    struct book * pLibraryArr[n];
    struct book * ptr;
    size_t size = sizeof(struct book) * n;
    struct book * plibrary = (struct book *)malloc(size);
    memcpy(plibrary, library, size);

    // init
    for (i = 0; i < n; i++)
        *(pLibraryArr + i) = plibrary + i;

    // compre
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if ((*(pLibraryArr + j))->value > (*(pLibraryArr + j + 1))->value)
            {
                ptr = *(pLibraryArr + j);
                *(pLibraryArr + j) = *(pLibraryArr + j + 1);
                *(pLibraryArr + j + 1) = ptr;
            }

        }
    }

    // output 
    for (i = 0; i < n; i++)
        printf("%s by %s: $%.2f\n", (*(pLibraryArr + i))->title, (*(pLibraryArr + i))->author,   (*(pLibraryArr + i))->value);

    free(plibrary);

}

