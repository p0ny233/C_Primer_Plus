#include <stdio.h>

#define M_TO_S 60

int main(void)
{
    int min;
    printf("Please Enter minutes: ");
    while (scanf("%d", &min), min > 0)
    {
        
        printf("%d minutes is %d seconds\n", min, min * M_TO_S);

        printf("Please Enter minutes: ");
    }
    
    printf("Done !\n");
    return 0;

}
