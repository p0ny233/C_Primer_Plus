#include <stdio.h>

int main(void)
{
    const int secret_code = 13;
    int code_entered;
    
    printf("To enter the triskaidekaphobia therapty club,\n");
    printf("please enter the secret code number: ");
    scanf("%d", &code_entered);

    while (secret_code != code_entered)
    {
        
        printf("To enter the triskaidekaphobia therapty club,\n");
        printf("please enter the secret code number: ");

        scanf("%d", &code_entered);

    }
    
    printf("Congratulations! You are cured!\n");


    return 0;

}
