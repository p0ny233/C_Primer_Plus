#include <stdio.h>

#define MAX 41


int main(void)
{

    FILE * fp;
    FILE * posfp;
    char words[MAX];
    long offset;

    if ((fp = fopen("wordy", "a+")) == NULL)
    {
        fprintf(stderr, "Can't open %s file.\n", *(argv + 1));
        exit(EXIT_FAILURE);
    }

    if ((posfp = fopen("position_for_p9_c.dat", "r+")) == NULL)
    {
        fprintf(stderr, "Can't open %s file.\n", "position_for_p9_c.dat");
        exit(EXIT_FAILURE);
    }
    else
    {
        if (fread(&offset, sizeof(long), 1, posfp) > 0)
        {
            fseek(fp, offset, SEEK_SET);
        }
        else
        {
            rewind(fp);
        }
    }

    puts("Enter words to add to the file; press the #");
    puts("key at the beginning of a line to terminate.");
    while ((fscanf(stdin, "%40s", words) == 1) && (*words != '#'))
    {
        fprintf(fp, "%s.\n", words);
    }
    pos = ftell(fp); 

    puts("File contents:");
    rewind(fp);
    while (fscanf(fp, "%s", words) == 1)
        puts(word);
    puts("Done!");
    if (fclose(fp) != 0)
        fprintf(stderr, "Error Closing file\n");

    return 0;
}
