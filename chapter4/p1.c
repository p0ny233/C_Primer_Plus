#include <stdio.h>

int main(void)
{

    char first_name[10];
    char last_name[10];

    printf("Enter your first name and your last name : ");
    scanf("%s %s", first_name, last_name);

    printf("%s,%s\n", last_name, first_name);


    return 0;

}
