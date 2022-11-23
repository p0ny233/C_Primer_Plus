#include <stdio.h>

#define SIZE 10
#define PAR

int main(void)
{
    int index, score[SIZE];
    int sum = 0;
    float average;

    printf("Enter %d golf scores:\n", SIZE);
    for (index = 0; index < SIZE; index++)
        scanf("%d",&score[index]);
    for (index = 0; index < SIZE; index++)
        sum += score[index];

    average = (sum / (float)SIZE);

    printf("sum = %d\t average = %f\n", sum, average);
    
    return 0;

}
