#include <stdio.h>

int main(void)
{

    int age;
    long double result;
    long double seconds = 3.156e+07;
    printf("Please Enter your age: ");
    scanf("%d", &age);
    
    result = seconds * age;

    printf("result = %Lf\n", result);

    return 0;

}
