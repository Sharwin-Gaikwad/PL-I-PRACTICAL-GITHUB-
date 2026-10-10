#include <stdio.h>
int main()
{
    float radius,pi=3.14;
    printf("Enter Radius Of Circle (in cm): ");
    scanf("%f",&radius);
    printf("Area Of Circle is (πxrxr) i.e : %.2f x (%.2f x %.2f) = %.2f",pi,radius,radius,pi*(radius*radius));
    return 0;
}