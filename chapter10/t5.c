#include <stdio.h>

int main(void)
{
    const int a = 5;
    int b[a] = {1,2,3}; // gcc compile is error; g++ compile is ok 

    return 0;

}
