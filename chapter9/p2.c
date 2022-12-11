#include <stdio.h>

void chline(char, int ,int);

int main(void)
{

    chline('!',2,10);

    return 0;

}

void chline(char ch, int j, int i)
{
    int x,y;


    for (x = 0; x < j; x++)
    {
        for (y = 0; y < i; y++)
        {
            putchar(ch);
        }

        putchar('\n');
    }

}
