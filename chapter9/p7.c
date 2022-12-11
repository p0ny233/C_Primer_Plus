#include <stdio.h>

void getpostition(void); 
int main(void)
{

   getpostition(); 

    return 0;
}

void getpostition(void)
{
    int pos;

    char ch;
    while ((ch = getchar()) != '\0')
    {
        if ((pos = ch - 'a') <= 25u || (pos - 'A' <= 25u))
        {
            putchar(ch);
            printf(" --- %d\n", pos + 1);

        }

    }

}
