#include <stdio.h>

int main(void)
{
    char note[] = "See you at the snack bar.";
    char *ptr;

    ptr = note;
    
    puts(ptr);  // See ..... bar.
    puts(++ptr);  // ee .... bar.

    note[7] = '\0';
    puts(note);  // See you
    puts(++ptr);  // e ... you

    return 0;
}
