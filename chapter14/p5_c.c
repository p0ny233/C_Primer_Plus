#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 10
#define CSIZE 4
#define NUM 3

struct name {
    char fname[LEN];
    char lname[LEN];
};

struct student {
    struct name info;
    float average;
    float grade[]; // use Flexible Array Member
};

int main(void)
{

    int i;
    //use Flexible Array Menber
    struct student * pstu = (struct student *)malloc(CSIZE *(sizeof(struct student) + NUM * sizeof(float)));

    strcpy(pstu[0].info.fname,"fname1");
    strcpy(pstu[1].info.fname,"fname2");
    strcpy(pstu[2].info.fname,"fname3");

    strcpy(pstu[0].info.lname,"lname1");
    strcpy(pstu[1].info.lname,"lname2");
    strcpy(pstu[2].info.lname,"lname3");

    for (i = 0; i < NUM; i++)
    {
        fprintf(stdout, "%s %s\n", (*(pstu + i)).info.fname, (*(pstu + i)).info.lname);
    }

    return 0;
}
