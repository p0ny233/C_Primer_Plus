#include <stdio.h>

void sum2d(int rows, int cols, int ar[2][3]);

int main(void)
{

    int rows = 2;
    int cols = 3;

    // int a[rows][cols] = { {1,2,3,}, {3,4,5} };
    int a[rows][cols];

    sum2d(rows, cols, a);
    

    return 0;


}

// void sum2d(int ar[rows][cols],int rows, int cols) // error decalre
void sum2d(int rows, int cols, int ar[rows][cols])
{


    

}
