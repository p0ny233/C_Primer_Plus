#include <stdio.h>
#include "10_names.h"
#include "10_names.h"

int main(void)
{
    struct names_st winner = { "Less", "Ismoor" };
    printf("The winner is %s %s.\n", winner.fname, winner.lname);

    return 0;
}

