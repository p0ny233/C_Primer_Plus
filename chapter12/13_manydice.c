#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "12_direroll.h"

int main(void)
{

    int dice, roll;
    int sides;
    int status;

    srand((unsigned int)time(NULL));
    printf("Enter the number of sides per die, 0 to stop.\n");

    while (scanf("%d", &sides) == 1 && sides > 0)
    {
        printf("How many dice?\n");

        if ((status = scanf("%d", &dice)) != 1)
        {
            if (status == EOF)
                break;
            else 
            {
                printf("You should have entered an integer.");
                printf(" Let's begin again.\n");
                while (getchar() != '\n');
            }

        }

        roll = roll_n_dice(dice, sides);

        printf("You have rolled a %d using %d %d-side dice.\n", roll, dice, sides);

        printf("How many sides? Enter 0 to stop.\n");

    }

    printf("The rollem() function was called %d time.\n", roll_count);

    printf("GOOD FORTUNE TO YOU!.\n");

    return 0;


}
