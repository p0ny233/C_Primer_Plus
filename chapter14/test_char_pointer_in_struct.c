#include <stdio.h>

#define LEN 20

struct names {
    char first[LEN];
    char last[LEN];
};


struct pnames {
    char * first;
    char * last;
};



int main(void)
{

    struct names veep = {"Talia", "Summers"};
    struct pnames treas = {"Brad", "Fallingjaw"};

    printf("%s and %s\n", veep.first, veep.last);


    return 0;
}
