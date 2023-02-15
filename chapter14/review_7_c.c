#include <stdio.h>
#include "starfolk.h"

void getinfo(struct bem * );

int main(void)
{

    struct bem * pb;
    struct bem deb = {
        6,
        {"Berbnazel", "Gwolkapwolk"},
        "Arcturan"
    };

    getinfo(&deb);



}


void getinfo(struct bem * pbem)
{
    printf("%s %s is a %d-limbed %s\n", pbem->title.first, pbem->title.last, pbem->limbs, pbem->type);
}

