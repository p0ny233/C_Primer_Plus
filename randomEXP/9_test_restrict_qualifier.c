#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int i;
    int ar[10] = {3};

    int * ptr = malloc(sizeof(int) * 10);
    int * restrict ptr2 = ar;

    for (i = 0; i < 10; i++)
    {
        ptr[i] += 2;
        ar[i] += 1;
    }



        


    return 0;

}
