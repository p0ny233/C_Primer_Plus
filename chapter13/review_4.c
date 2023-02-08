#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{
    double n1 = 0;
    double sum = 0;
    int count = 0;
    FILE * fp;

    if (argc == 1)
    {
        // no argv
        fp = stdin;
    }
    else if (argc == 2)
    {
        // have one argv
        if ((fp = fopen(*(argv + 1), "r")) == NULL)
        {
            fprintf(stderr, "Can't open %s\n", *(argv + 1));
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        fprintf(stderr, "Usage: %s [file]", argv[0]);
        exit(EXIT_FAILURE);
    }

    while (fscanf(fp, "%lf", &n1) == 1)
    {
        sum += n1;
        count++;
    }

    if (count > 0)
        fprintf(stdout, "Average of %d values = %f.\n", count, sum / count);
    else
        fprintf(stdout, "No valid data.\n");

    return 0;
}
