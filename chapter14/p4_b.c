#include <stdio.h>
#include <string.h>

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
void PrintStruct(struct SSNINFO ssnInfo);

int main(void)
{
    int i = 3, j;

    struct SSNINFO example;
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


    for (j = 0; j < i; j++)
    {
        PrintStruct(*(ssnInfoArr + j));
    }
    return 0;
}


void PrintStruct(struct SSNINFO ssnInfo)
{
    printf("%s, %s %s%s -- %s\n", ssnInfo.info.fname, ssnInfo.info.lname, ssnInfo.info.mname, *(ssnInfo.info.mname) != '\0' ? "." : "", ssnInfo.number);

}
