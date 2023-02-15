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
    pt->born = 1;
    printf("%d\n", pt->born);

    return 0;
}
