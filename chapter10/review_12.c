#include <stdio.h>

void func1_trots(int, double *);
void func2_trots(int, double [*]); // VAL 

void func1_clops(int, short (*pclops)[30]);
void func2_clops(int, int, short [*][*]);  // VAL

void func1_shots(int, long (*pshots)[10][15]);
void func2_shots(int, int, int, long [*][*][*]);  // VAL

int main(void)
{
    double trots[20] = {3.0};
    short clops[10][30] = {2};
    long shots[5][10][15] = {1};

    func1_trots(20, trots);
    func2_trots(20, trots);

    func1_clops(10, clops);
    func2_clops(10, 30, clops);

    func1_shots(5, shots);
    func2_shots(5, 10, 15, shots);

    return 0;

}

void func1_trots(int rows, double * ptrots)
{
    int i;
    double result;

    for (result = 0, i = 0; i < rows; i++)
        result += ptrots[i];

    printf("func1 - func1_trots: result = %f\n", result);
}

void func2_trots(int rows, double ptrots[rows])  // VAL
{
    int i;
    double result;
    for (result = 0, i = 0; i < rows; i++)
        result += ptrots[i];

    printf("func2 - func2_trots: result = %f\n", result);
}

void func1_clops(int rows, short (*ppclops)[30])
{
    int i;
    int j;
    short result;

    for (result = 0, i = 0; i < rows; i++)
        for (j = 0; j < 30; j++)
            result += *(*(ppclops + i) + j);

    printf("func1 - func1_clops: result = %d\n", result);
}

void func2_clops(int rows, int cols, short ppclops[rows][cols])  // VAL
{
    int i;
    int j;
    int result;

    for (result = 0, i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            result += *(*(ppclops + i) + j);

    printf("func2 - func2_clops: result = %d\n", result);

}

void func1_shots(int rows, long (*pppshots)[10][15])
{

    int i;
    int j;
    int z;
    long result;
    
    for (i = 0, result = 0; i < rows; i++)
        for (j = 0; j < 10; j++)
            for (z = 0; z < 15; z++)
                result += *(*(*(pppshots + i) + j) + z);

    printf("func1 - func1_shots: result = %ld\n", result);

}

void func2_shots(int rrows, int rows, int cols, long pppshots[rrows][rows][cols])  // VAL
{
    int i, j, z;
    long result;

    for (result = 0, i = 0; i < rrows; i++)
        for (j = 0; j < rows; j++)
            for (z = 0; z < cols; z++)
                result += *(*(*(pppshots + i) + j) + z);

    printf("func1 - func2_shots: result = %ld\n", result);


}
