#include <stdio.h>

void pound(char);

int main(void)
{

    int times = 5;
    char ch = '!';
    float f = 6.0;

    //pound(times);
    pound(ch);  // 
    //pound(f);  // 6
    

    return 0;


}
void pound(char n)
{
    while (n-- > 0)
        printf("#");
    printf("\n");

    return;
}
