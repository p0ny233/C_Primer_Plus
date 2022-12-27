#include <stdio.h>
#include <string.h>

#define SIZE 80

char * s_gets(char * s, int n);

int main(void)
{

    char flower[SIZE];
    char addon[] = "s smell like old shoes.";

    puts("What is your favoite flower?");
    if (s_gets(flower, SIZE))
    {
        strcat(flower, addon);
        puts(flower);
        puts(addon);
    }
    else
        puts("End of file encountered!");

    return 0;
}

char * s_gets(char * s, int n)
{

    char * ret_val;
    int i = 0;

    ret_val = fgets(s, n, stdin);

    if (ret_val)
    {
        while (s[i] != '\n' && s[i] != '\0')
            i++;

        if (s[i] == '\n')
            s[i] = '\0';
        else
            while (getchar());

    }


    return s;

}
