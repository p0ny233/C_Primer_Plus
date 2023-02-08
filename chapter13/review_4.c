#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{
    double n1;
    FILE * fp;
    const char * file = "format.out";

    if (argc >= 1 && argc <= 2)
    {
        if (argc == 1)
        {
            // no argv
            fscanf(stdin, "%f", &n1);

        }
        else
        {
            // have one argv

        }
    }
    else
    {
        fprintf(stderr, "Usage: %s [file]", argv[0]);
        exit(EXIT_FAILURE);
    }

    return 0;
}
