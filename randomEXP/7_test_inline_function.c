#include <stdio.h>

inline static void eatline()
{
    while (getchar() != '\n');
}

void eatline2()
{
    while (getchar() != '\n');
}

int main(void)
{
    eatline();

    return 0;

}
