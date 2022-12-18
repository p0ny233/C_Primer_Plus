// pages 272

#include <stdio.h>

int main(void)
{

    // a
    int a[] = {1, 2, 4, 8, 16, 32};

    // b
    int b = a[2];

    // c
    // int c[100] = { {99 = -1} };  // error
    int c[100] = { [99] = -1};  // correct 


    // d
    int d[100] = { [5] = 101, [10] = 101, [12] = 101, [13] = 101 };






    return 0;

}
