#include <stdio.h>
#include <stdlib.h>


#define MAX 41

int get_row_number(FILE * fp);

int main(int argc, char ** argv)
{

    FILE * fp;
    FILE * posfp;
    char words[MAX];
    int count;

    if ((fp = fopen("wordy", "a+")) == NULL)
    {
        fprintf(stderr, "Can't open %s file.\n", *(argv + 1));
        exit(EXIT_FAILURE);
    }


    count = get_row_number(fp);

    puts("Enter words to add to the file; press the #");
    puts("key at the beginning of a line to terminate.");
    while ((fscanf(stdin, "%40s", words) == 1) && (*words != '#'))
    {
        fprintf(fp, "%d %s.\n", count, words);
    }

    puts("File contents:");
    rewind(fp);

    // console file contents 
    while (fscanf(fp, "%s", words) == 1)
        puts(words);
    puts("Done!");
    if (fclose(fp) != 0)
        fprintf(stderr, "Error Closing file\n");

    return 0;
}

int get_row_number(FILE * fp)
{
    char ch;
    rewind(fp);
    int count;

    while ((ch = getc(fp)) != EOF)
        if (ch == '\n')
            count++;
    return count;
}
