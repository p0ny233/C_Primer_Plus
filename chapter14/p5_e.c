#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN 10
#define CSIZE 4
#define NUM 3

struct name {
    char fname[LEN];
    char lname[LEN];
};

struct student {
    struct name name;
    float average;
    float grade[NUM];
};

char * s_gets(char * st, int n);
void show(struct student arr[]);



int main(void)
{
    int i, j;
    float average;
    float total;

    struct student pstu[CSIZE];

    for (i = 0; i < CSIZE; i++)
    {
        fprintf(stdout, "Please input number %d student first name: ", i + 1);
        s_gets((*(pstu + i)).name.fname, LEN);
        fprintf(stdout, "Please input number %d student last name: ", i + 1);
        s_gets((*(pstu + i)).name.lname, LEN);

        for (j = 0; j < NUM; j++)
        {
            fprintf(stdout, "Please input number %d student %d score: ", i + 1, j + 1);
            fscanf(stdin, "%f", (*(pstu + i)).grade + j );
            getchar();
        }
    }

    for (i = 0; i < CSIZE; i++)
    {
        for (j = 0, total = 0; j < NUM; j++)
        {
            total += *((pstu + i)->grade + j);
        }

        (pstu + i)->average = total / j;
    }

    show(pstu);

    return 0;
}

void show(struct student arr[])
{
    int i, j;
    for (i = 0; i < CSIZE; i++)
    {
        
        printf("%s %s\n", (arr + i)->name.fname, (arr + i)->name.lname) ;

        for (j = 0; j < NUM; j++)
        {
            printf("Number %d Student %d Score %f\n", i + 1, j + 1, *((arr + i)->grade + j));
        }

        printf("Number %d Student Average %f\n", i + 1, (arr + i)->average);
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
