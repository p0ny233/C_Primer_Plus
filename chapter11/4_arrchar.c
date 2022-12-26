#include <stdio.h>

#define SLEN 40
#define LIM 5


int main(void)
{
    const char *mytalents[LIM] = {
        "Adding number swiftly",
        "Multiplying accurately", "Stashing data",
        "Following instructions to the letter",
        "Understanding the C language",
    };

    const char yourtalents[LIM][SLEN] = {
        "Walking in a straght line",
        "Sleeping", "Watching television",
        "Mailing letters", "Reading email"
    
    };

    int i;

    puts("Let's comare talents.");
    printf("%-36s %-25s\n", "My Talents", "Your Talents");

    for (i = 0; i < LIM; i++)
        printf("%-36s %-25s\n", *(mytalents + i), *(yourtalents + i));

    printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n", sizeof(mytalents), sizeof(yourtalents));


    return 0;

}
