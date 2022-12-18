#include <stdio.h>

int main(void)
{


    float rootbeer[10], things[10][5], *pf, value = 2.2;
    int i = 3;

    // a
    rootbeer[2] = value;  // correct

    // b
    scanf("%f", rootbeer);  // correct  

    // c
    // rootbeer = value;  // error

    // d
    // printf("%f\n", rootbeer);  // no define
    
    // e
    things[4][4] = rootbeer[3];

    // f
    // things[5] = rootbeer;  // error 

    // g
    // pf = value;  // error

    // h
    pf = rootbeer;




    return 0;

}
