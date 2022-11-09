#include <stdio.h>

void Temperatures(const double temp)
{
    double sheshidu;
    double kaishidu;

    sheshidu = 5.0 / 9.0 * (temp - 32.0);
    kaishidu = sheshidu + 273.16;
    printf("temp = %.2f\nsheshidu = %.2f\nkaishidu = %.2f\n", temp, sheshidu, kaishidu);

    return;


}
int main(void)
{
    
    double temp;
    char ch;
    int i_ch = 0;
    int count = 10;
    while(count--)
    {

        scanf("%lf", &temp);
        ch = (char)temp;
        i_ch = (char)temp;
        
        if (ch == '\0')
        {
            printf("exit!\n");
            goto exit;
        }
        
        Temperatures(temp);

        ch = '\0';
        temp = 0.0;
    }

    

    exit:
    return 0;

}
