#include <stdio.h>
#include <stdlib.h>


#define ARRSIZE 1000

int main(void)
{
    const char * file = "number.dat";
    FILE * fp;
    int i;
    double number[ARRSIZE];
    int select;
    double n;

    for (i = 0; i < ARRSIZE; i++)
    {
        *(number + i) = 100.0 + 1.0 / (i + 1);
    }

    if ((fp = fopen(file, "wb")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", file);
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < ARRSIZE; i++)
    {
        fwrite(number + i, sizeof(double), sizeof(char), fp);
    }
    fclose(fp);

    if ((fp = fopen(file, "rb")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", file);
        exit(EXIT_FAILURE);
    }

    while (printf("enter you want select[0 ~ %d] out of rang to quit: ", ARRSIZE - 1) && (scanf("%d", &select) == 1) && select >= 0 && select < ARRSIZE)
    {
        fseek(fp, sizeof(double) * select, SEEK_SET);
        fread(&n, sizeof(double), 1, fp);
        printf("value = %f\n", n);

    }

    puts("Bye");


    return 0;

}
