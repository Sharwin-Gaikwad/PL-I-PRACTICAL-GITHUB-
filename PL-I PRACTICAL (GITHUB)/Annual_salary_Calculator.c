#include <stdio.h>

int main() {
    float basic_salary, annual_salary;

    printf("Enter monthly basic salary: ");
    scanf("%f", &basic_salary);

    annual_salary = basic_salary * 12;

    printf("The annual salary is: %.2f\n", annual_salary);

    return 0;
}