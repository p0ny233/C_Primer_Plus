#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    int sets;
    int sides;
    int dice;
    int i, j;
    int total;


    printf("Enter the number of sets; enter q to quit: ");
    while (scanf("%d", &sets) == 1 && sets > 0)
    {

        srand((unsigned int)time(NULL));

        printf("How many sides and how many dice? "); 
        scanf("%d%d", &sides, &dice);
        printf("Here are %d sets of %d %d-sides throws.\n", sets, dice, sides);

        for (i = 0; i < sets; i++)
        {
            for (total = 0, j = 0; j < dice; j++)
            {
                total = total + rand() % 6 + 1;

            }

            printf("%d ", total);

        }
        putchar('\n');
        printf("Enter the number of sets; enter q to quit: ");
    }


    return 0;
}
