#include <stdio.h>

double func1(double, double);
double func2(double, double);
double func3(double, double);
double func4(double, double);

int main(void)
{   

    double(* arr[4])(double, double) = {func1, func2, func3, func4};

    (*(arr + 1))(10.0, 2.5);

    func2(10.0, 2.0);


    return 0;
}


double func1(double a, double b)
{
    double c = 1.1;
    return c;
}


double func2(double a, double b)
{
    double c = 1.2;
    printf("%f\n", c);
    return c;
}


double func3(double a, double b)
{
    double c = 1.3;
    return c;
}

double func4(double a, double b)
{
    double c = 1.4;
    return c;
}






