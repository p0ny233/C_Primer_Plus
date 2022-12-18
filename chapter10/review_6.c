#include<stdio.h>

int main(void)
{
    int grid[30][100];

    // a
    int * ptr_a = (*(grid + 22)) + 56;

    // b
    int * ptr_b1 = *(grid + 22);
    int * ptr_b2 = grid[22];

    //c
    int * ptr_c1 = *grid;
    int * ptr_c2 = grid[0];
    int * ptr_c3 = &grid[0][0];

}
