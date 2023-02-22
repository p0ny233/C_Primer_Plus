#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

#define MAXTITL 30
#define MAXAUTL 30
#define LEN 10


struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
    int flag;
};


char * s_gets(char * st, int n);
void listBook(FILE * fp);
void generateBookData(FILE * fp);
void AddBookData(FILE * fp);
void deleteBookData(FILE * fp);



int main(int argc, char ** argv)
{

    int input;
    const char * defaultFileName = "book.dat";
    char fileName[LEN];
    FILE * fp;

    if (argc == 1)
        strncpy(fileName, defaultFileName, strlen(defaultFileName));
    else if (argc == 2)
        strncpy(fileName, *(argv + 1), strlen(*(argv + 1)));
    else 
    {
        fprintf(stderr, "Usage: %s FilePath", *argv);
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(fileName, "r+b")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", fileName);
        exit(EXIT_FAILURE);
    }
    while (true)
    {
        printf(" o         ooooo oooooooooooo ooooo      ooo ooooo     ooo \n");
        printf("`88.       .888' `888'     `8 `888b.     `8' `888'     `8' \n");
        printf(" 888b     d'888   888          8 `88b.    8   888       8  \n");
        printf(" 8 Y88. .P  888   888oooo8     8   `88b.  8   888       8  \n");
        printf(" 8  `888'   888   888    \"     8     `88b.8   888       8  \n");
        printf(" 8    Y     888   888       o  8       `888   `88.    .8'  \n");
        printf("o8o        o888o o888ooooood8 o8o        `8     `YbodP'    \n");
        printf("                                                           \n");

        printf("1) list book     2)generate book data\n");
        printf("3) delete book   4)add book\n");
        printf("5) exit\n");

        scanf("%d", &input);
        while (getchar() != '\n');

        switch(input)
        {
            case 1:
                listBook(fp);
                break;
            case 2:
                generateBookData(fp);
                break;
            case 3:
                deleteBookData(fp);
                break;
            case 4:
                AddBookData(fp);
                break;
            case 5:

                fclose(fp);
                puts("Exit");
                exit(EXIT_SUCCESS);

        }
    }


    return 0;
}


void listBook(FILE * fp)
{
    rewind(fp);
    int index = 0;
    struct book book;
    while (fread(&book, sizeof(char), sizeof(struct book), fp) == sizeof(struct book))
        printf("index[%d] -> %s by %s: %.2f\n", index++,book.title, book.author, book.value);

}

void generateBookData(FILE * fp)
{
    char fileName[LEN];
    struct book book[LEN];
    int i = 0, j;

    fseek(fp, 0L, SEEK_END);

    while (i < LEN && (printf("input title:"), s_gets((book + i)->title, LEN)) && (*((book + i)->title) != '\0') && (printf("input author:"), s_gets((book + i)->author, LEN)) && ((printf("input value:"), fscanf(stdin, "%f", &((book + i)->value)), getchar(), (book + i)->flag = 1)))
        i++;
        
    for (j = 0; j < i; j++)
    {
        fwrite(book + j, sizeof(char), sizeof(struct book), fp);
    }
}

void deleteBookData(FILE * fp)
{
    int i, j, index, select;
    i = j = index = 0;
    size_t size = 0;
    rewind(fp);
    fseek(fp, 0L, SEEK_END);
    size = ftell(fp);
    struct book * pbook;
    struct book * tmp;
    pbook = (struct book *)malloc(size);
    tmp = pbook;
    rewind(fp);
    while (fread(pbook + i, sizeof(char), sizeof(struct book), fp) == sizeof(struct book))
        i++;

    for (j = 0; j < i; j++)
    {
        printf("index[%d] -> %s by %s: %.2f flag: %d\n", index++,(pbook + j)->title, (pbook + j)->author, (pbook + j)->value, (pbook + j)->flag);
    }

    while (printf("please select need delete[-1 to quit]:") && (scanf("%d", &select) == 1) && select != -1)
    {
        (pbook + select)->flag = 0;
    }

    rewind(fp);

    for (j = 0; j < i; j++)
    {
        if ((pbook + j)->flag)
            fwrite(pbook + j, sizeof(char), sizeof(struct book), fp);
    }

    
    size = ftell(fp);
    printf("size = %u\n", size);
    ftruncate(fp->_fileno, size);
}

void AddBookData(FILE * fp)
{
    struct book book;
    fseek(fp, 0L, SEEK_END);
    while ((printf("input title[enter to quit]:"), s_gets(book.title, LEN) != NULL) && (*book.title != '\0'))
    {
        printf("input author:");
        s_gets(book.author, LEN);
        printf("input book value:");
        fscanf(stdin, "%f", &book.value);
        getchar();
        book.flag = 1;

        fwrite(&book, sizeof(char), sizeof(struct book), fp);
    }

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
