#include <stdio.h>

enum spectrum {red, orange, yellow, green, blue, violet};



int main(void)
{

    enum spectrum color = red;

    if (color == red)
    {
        color++;  // g++ is error, gcc is ok

    }
    else 
    {
        color = blue;
    }

    printf("color = %d\n", color);
    

    return 0;

}
