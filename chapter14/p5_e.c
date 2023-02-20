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
    float grade[];
};

char * s_gets(char * st, int n);


int main(void)
{
    int i, j;
    float average;
    float total;

    struct student * pstu = malloc(CSIZE * (sizeof(struct student) + NUM * sizeof(float)));

    for (i = 0; i < CSIZE; i++)
    {
        fprintf(stdout, "Please input number %d student first name: ", i + 1);
        s_gets((*(pstu + i)).name.fname, LEN);
        fprintf(stdout, "Please input number %d student last name: ", i + 1);
        s_gets((*(pstu + i)).name.lname, LEN);

        for (j = 0; j < NUM; j++)
        {
            fprintf(stdout, "Please input number %d student %d score: ", i + 1, j + 1);
            fscanf(stdin, "%f", (*(pstu + j)).grade );
            getchar();
        }
    }

    
    /*
    for (i = 0; i < CSIZE; i++)
    {
        for (j = 0; j < NUM; j++)
        {
            (*(pstu + i)).grade + j;
        }
    }

    */



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
