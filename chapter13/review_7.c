#include <stdio.h>
#include <stdlib.h>


int main(void)
{
   FILE * fp1;
   FILE * fp2;
   int number = 8238201;
   const char * file1 = "review_7.data1";
   const char * file2 = "review_7.data2";

    if ((fp1 = fopen(file1, "w")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", file1);
        exit(EXIT_FAILURE);
    }
    else if ((fp2 = fopen(file2, "w")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", file2);
        exit(EXIT_FAILURE);
    }

    fprintf(fp1, "%d", number);
    fwrite(&number, sizeof(int), 1, fp2);

    fclose(fp1);
    fclose(fp2);

    return 0;
}
