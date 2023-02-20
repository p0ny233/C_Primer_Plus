#include <stdio.h>

#define LEN 10
#define CSIZE 2
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
void setAverage(struct student arr[]);
void ShowAverageOfClass(struct student arr[]);


int main(void)
{
    int i, j;
    

    struct student pstu[NUM];
    for (i = 0; i < CSIZE; i++)
    {
        printf("input Number %d Student first name:", i + 1);
        s_gets((pstu + i)->name.fname, LEN);
        
        printf("input Number %d Student last name:", i + 1);
        s_gets((pstu + i)->name.lname, LEN);

        for (j = 0; j < NUM; j++)
        {
            printf("input Number %d Student %d Score:", i + 1, j + 1);
            fscanf(stdin, "%f", (pstu + i)->grade + j);
            getchar();
        }

    }
    setAverage(pstu);

    ShowAverageOfClass(pstu);
    
    //show(pstu);





    return 0;
}

void ShowAverageOfClass(struct student arr[])
{
    int i, j;
    float total;

    for (total, i = 0; i < CSIZE; i++)
    {
        for (j = 0; j < NUM; j++)
        {
            total += *((arr + i)->grade + j);
        }

    }

    printf("Average of Class : %f\n", total / CSIZE);

}

void setAverage(struct student arr[])
{
    int i, j;
    float total;

    for (i = 0; i < CSIZE; i++)
    {
        for (total = 0, j = 0; j < NUM; j++)
        {
            total += *((arr + i)->grade + j);
        }

        (arr + i)->average = total / NUM;
    }

}

void show(struct student arr[])
{
    int i, j;

    for (i = 0; i < CSIZE; i++)
    {
        printf("Number %d Student : %s %s\n", i + 1, (arr + i)->name.fname, (arr + i)->name.lname);
        for (j = 0; j < NUM; j++)
        {
            printf("%d score: %f\n", j + 1, *((arr + i)->grade + j));
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
