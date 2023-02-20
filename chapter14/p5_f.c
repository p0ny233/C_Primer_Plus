#include <stdio.h>

#define CSIZE 2
#define NUM 3
#define LEN 10


struct name {
    char fname[LEN];
    char lname[LEN];
};


struct student {
    struct name name;
    float average;
    float grade[NUM];
};


void showAll(struct student arr[]);

char * s_gets(char * st, int n);

int main(void)
{
    int i, j;
    float total;

    struct student pstu[CSIZE];

    for (i = 0; i < CSIZE; i++)
    {
        printf("input student fname: ");
        s_gets( (pstu + i)->name.fname, LEN);

        printf("input student lname: ");
        s_gets((pstu + i)->name.lname, LEN);

        for (j = 0; j < NUM; j++)
        {

            printf("input Number %d Student %d Score\n", i + 1, j + 1);
            fscanf(stdin, "%f", (pstu + i)->grade + j);
            getchar();
        }

    }

    // init average 
    for (i = 0; i < CSIZE; i++)
    {
        for (j = 0, total = 0; j < NUM; j++)
        {
            total += *((pstu + i)->grade + j);
        }

        (pstu + i)->average = total / NUM;

    }

    showAll(pstu);

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
        if (*st == '\n')
            *st = '\0';
        else 
            while (getchar() != '\n');
    }

    return ret_val;
}

void showAll(struct student arr[])
{
    int i, j;

    for (i = 0; i < CSIZE; i++)
    {
        printf("%s %s\n", (arr + i)->name.fname, (arr + i)->name.lname);

        for (j = 0; j < NUM; j++)
        {
            printf("Number %d Student, Number %d score %f\n", i + 1, j + 1, *((arr + i)->grade + j));
        }

        printf("Number %d Student, Average: %f\n", i + 1, (arr + i)->average);
    }
}














