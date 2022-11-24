#include <stdio.h>

#define base_salary_to 300
#define add_salary_to (base_salary_to + 150)

#define base_per 0.15
#define base_add_per 0.2
#define other_per 0.25
#define base_salary_hour 10.0

#define base1 base_salary_to * base_per
#define base2(x) (base1 + x * base_add_per)
#define base3(x) (base2(x) + x * other_per)

int main(void)
{

    double work_hours;
    double suijin;
    double salary;
    double base_salary;
    double total_salary;
    double add_hours;
    double add_salary;

    printf("Enter your work week hours: ");    
    scanf("%lf", &work_hours);
    

    add_hours = work_hours - 40;
    add_salary = add_hours * 15;

    base_salary = work_hours - add_hours;

    total_salary = base_salary + add_salary;

    if (total_salary < base_salary_to)
        suijin = total_salary * base_per;
    else if (total_salary < add_salary_to)
    {
        suijin = base2(total_salary);

    }
    else 
    {
        suijin = base3(total_salary);

    }

    salary = total_salary - suijin;

    printf("total_salary = %f\tsuijin = %f\tsalary = %f\n", total_salary, suijin, salary);



    return 0;

}
