#include <stdio.h>


int main(void)
{
    int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31};
    int index;
    //printf("sizeof(months) = %ld\n", sizeof(months));

    for (index = 0; index < sizeof(months) / sizeof(months[0]); index++)
        printf("Months %2d has %d days.\n", index + 1, months[index]);
    
    return 0;

}
