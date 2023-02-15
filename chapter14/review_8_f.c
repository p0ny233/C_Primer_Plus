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
    scanf("%s", pt->name.lname);
    printf("%s\n", pt->name.lname);

    return 0;
}
