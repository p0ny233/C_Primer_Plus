#include <stdio.h>

void interchange(int * px, int * py);

int main(void)
{

    int x, y;
    x = 5, y = 6;
    
    printf("x = %d, y = %d\n", x, y);
    interchange(&x, &y);
    printf("x = %d, y = %d\n", x, y);

    return 0;

}

void interchange(int * px, int * py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}
