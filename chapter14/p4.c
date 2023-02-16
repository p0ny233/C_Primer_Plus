#include <stdio.h>
//#include <string.h>

#define LEN 10

struct INFO {
    char fname[LEN];
    char mname[LEN];
    char lname[LEN];
};

struct SSNINFO {
    char number[LEN];
    struct INFO info;
};
void PrintStruct(struct SSNINFO * pssnInfo, int n);

int main(void)
{
    int i = 3;
    struct SSNINFO ssnInfoArr[] = 
    {
        {
            "294029856",
            {.fname="Dribble", .lname="Flossie", .mname="M"}
        },
        {
            "209849212",
            {"Lqwe", "", "Plwda"}
        },
        {
            "193923432",
            {"Zdfd", "A", "Rsds"}
        }

    };

    PrintStruct(ssnInfoArr, i);

    return 0;
}


void PrintStruct(struct SSNINFO * pssnInfo, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%s, %s %s%s -- %s\n", (pssnInfo + i)->info.fname, (pssnInfo + i)->info.lname, (pssnInfo + i)->info.mname,*((pssnInfo + i)->info.mname) != '\0' ? "." : "", (pssnInfo + i)->number);



}
