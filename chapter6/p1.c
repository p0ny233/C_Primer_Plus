#include <stdio.h>

#define SIZE 26

int main(void)
{

    int count;

    char letters[SIZE] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n'
                 ,'o','p','q','r','s','t','u','v','w','s','y','z'};

    for (count = 0; count < SIZE; count++)
    {
        printf("%c\n", letters[count]);

    }
    



    return 0;

}
