#include <stdio.h>
#include <string.h>

struct fullname {
    char fname[20];
    char lname[20];
};

struct bard {
    struct fullname name;
    int born;
    int died;
};

struct bard willie;
struct bard * pt = &willie;

int main(void)
{
    char * pstr;
    int i = 0;
    int total;
    scanf("%s", &willie.name.fname);
    scanf("%s", &willie.name.lname);
    
    for (i = 0, total; i < strlen(willie.name.fname); i++, total++);

    for (i = 0; i < strlen(willie.name.lname); i++, total++);


    printf("%d\n", total);

    return 0;
}
