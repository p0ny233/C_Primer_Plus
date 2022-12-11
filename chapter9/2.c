#include <stdio.h>
#include <string.h>


#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void show_n_char(char, int);

int main(void)
{

    show_n_char('*', WIDTH);
    putchar('\n');

    show_n_char(' ', (WIDTH - strlen(NAME)) / 2);
    printf(NAME);
    show_n_char(' ', WIDTH - ((WIDTH - strlen(NAME)) / 2));
    putchar('\n');

    show_n_char(' ', (WIDTH - strlen(ADDRESS)) / 2 );
    printf(ADDRESS);
    show_n_char(' ', WIDTH - ((WIDTH - strlen(ADDRESS)) / 2));
    putchar('\n');

    show_n_char(' ', (WIDTH - strlen(PLACE)) / 2);
    printf(PLACE);
    show_n_char(' ', WIDTH - ((WIDTH - strlen(PLACE) / 2)));
    putchar('\n');


    show_n_char('*', WIDTH);
    putchar('\n');

    return 0;


}

void show_n_char(char c, int size)
{

    int i = 0;
    for (; i < size; i++)
    {
        putchar(c);
    }

    return;

}
