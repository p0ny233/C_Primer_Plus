#include <stdio.h>

void why_me();

#define PR(X, Y, ...) printf("The " #X " is " #Y ".\n",__VA_ARGS__)

int main(void)
{

    printf("The file is %s.\n", __FILE__);
    printf("The date is %s.\n", __DATE__);
    printf("The time is %s.\n", __TIME__);
    printf("The version is %ld.\n", __STDC_VERSION__);
    printf("This is line %d.\n", __LINE__);
    printf("This function is %s.\n", __func__);
    why_me();

    printf("\n+++++++++ use define +++++++++++\n");
    PR("file", "%s", __FILE__);
    PR("version", "%ld", __STDC_VERSION__);

    return 0;
}

void why_me()
{
    printf("This function is %s\n", __func__);
    printf("This is line %d.\n", __LINE__);
}
