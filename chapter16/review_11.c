#include <stdio.h>
#include <stdbool.h>

#define FUNC(X) _Generic((X), \
_Bool: "boolean",\
default: "not boolean")

int main(void)
{
    int a = 0;
    bool b;
    printf("%s\n", FUNC(a));
    printf("%s\n", FUNC(b));

    return 0;
}
