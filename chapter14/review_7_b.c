#include <stdio.h>

struct name {
    char first[20];
    char last[20];
};

struct bem {
    int limbs;
    struct name title;
    char type[30];
};

int main(void)
{

    struct bem * pb;
    struct bem deb = {
        6,
        {"Berbnazel", "Gwolkapwolk"},
        "Arcturan"
    };

    pb = &deb;

    printf("%s\n", deb.title.last);
    printf("%s\n", pb->title.last);

}

