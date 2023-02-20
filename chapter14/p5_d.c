#include <stdio.h>

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

void show(struct student * pstu);
char * s_gets(char * st, int n);



int main(void)
{
    int i, j;    
    struct student arr[CSIZE];

    for (i = 0; i < CSIZE; i++)
    {
        printf("input fname: ");
        s_gets((arr + i)->name.fname, LEN);

        printf("input lname: ");
        s_gets((arr + i)->name.lname, LEN);

        for (j = 0; j < NUM; j++)
        {
            printf("number %d student %d score\n", i + 1, j + 1);
            fscanf(stdin, "%f", (arr + i)->grade + j);
            getchar();
        }
    }

    show(arr);



    return 0;
}


void show(struct student * pstu)
{
    int i, j;

    for (i = 0; i < CSIZE; i++)
    {   
        printf("name %s %s\n", (pstu + i)->name.fname, (pstu + i)->name.lname);

        for (j = 0; i < NUM; j++)
        {
            printf("%d score : %d\n", j + 1, *((pstu + i)->grade + j));
        }

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
