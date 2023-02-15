#include <stdio.h>

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
    scanf("%s", pt->name.fname);
    printf("%c\n", pt->name.fname[2]);

    return 0;
}
