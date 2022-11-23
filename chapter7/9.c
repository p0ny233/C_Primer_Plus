#include <stdio.h>

int main(void)
{

    const float MIN = 0.0f;
    const float MAX = 100.0f;

    float score;
    float total = 0.0f;
    float min = MAX;
    float max = MIN;

    int n = 0;

    printf("Enter the first score (q to quit): ");
    while (scanf("%f", &score))
    {

        if (score < MIN && score > MAX)
        {
            printf("invalid\n");
            continue;
        }

        printf("Accepting %.1f:\n", score);
        min = (score < min) ? score : min;
        max = (score > max) ? score : min;

        total += score;
        n++;
        printf("Enter next score (q to quit): ");
    }

    if (n > 0)
    {
        printf("Average of %d scores is %.1f.\n", n, total / n);
        printf("Low = %.1f, high = %.1f\n", min, max);
    }
    else 
    {
        printf("no valid score were Entered \n");

    }


    return 0;

}
