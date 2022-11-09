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
    int status = 0;

    status = scanf("%lf", &temp);
    
    while(status == 1)
    {

        Temperatures(temp);
        status = scanf("%lf", &temp); 
    }
    printf("Done !\n");

    return 0;

}
