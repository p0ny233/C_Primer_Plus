#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define SLEN 10
#define LEN 19

struct member {
    int index;
    char fname[SLEN];
    char lname[SLEN];
    int number1;
    int number2;
    int number3;
    int rbi;
    float hitrate;
};



int main(void)
{
    int i, j;
    FILE * fp;
    struct member tmp;
    struct member memberArr[LEN];

    const char * fileName = "data";
    fp = fopen(fileName, "r");
    if (fp == NULL)
    {
        printf("Can't open %s\n", fileName);
        exit(EXIT_FAILURE);
    }

    // memset
    memset(memberArr, 0, sizeof(struct member) * LEN);

    while (fscanf(fp, "%d", &(tmp.index)) > 0)
    {
        fscanf(fp, "%s", (memberArr + tmp.index)->fname);
        fscanf(fp, "%s", (memberArr + tmp.index)->lname);
        fscanf(fp, "%d", &(tmp.number1));
        fscanf(fp, "%d", &(tmp.number2));
        fscanf(fp, "%d", &(tmp.number3));
        fscanf(fp, "%d", &(tmp.rbi));

        (memberArr + tmp.index)->index = tmp.index;
        (memberArr + tmp.index)->number1 += tmp.number1;
        (memberArr + tmp.index)->number2 += tmp.number2;
        (memberArr + tmp.index)->number3 += tmp.number3;
        (memberArr + tmp.index)->rbi += tmp.rbi;
        
         
        (memberArr + tmp.index)->hitrate = ((memberArr + tmp.index)->number2) / ((memberArr + tmp.index)->number1);
        //(memberArr + tmp.index)->hitrate = 1.0;
    }

    for (i = 0; i < LEN; i++)
    {
        fprintf(stdout, "%d\t", (memberArr + i)->index);
        fprintf(stdout, "%s\t", (memberArr + i)->fname);
        fprintf(stdout, "%s\t", (memberArr + i)->lname);
        fprintf(stdout, "%d\t", (memberArr + i)->number1);
        fprintf(stdout, "%d\t", (memberArr + i)->number2);
        fprintf(stdout, "%d\t", (memberArr + i)->number3);
        fprintf(stdout, "%d\t", (memberArr + i)->rbi);
        fprintf(stdout, "%f\n", (memberArr + i)->hitrate);
    }

    return 0;
}
