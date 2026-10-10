#include <stdio.h>
int main(){
    float a,b;
    printf("Enter First Number: ");
    scanf("%f",&a);
    printf("Enter Second Number: ");
    scanf("%f",&b);
    printf("Addition is: %.2f + %.2f = %.2f",a,b,a+b);
    printf("\nDifference is: %.2f - %.2f = %.2f",a,b,a-b);
    printf("\nMultiplication is: %.2f X %.2f = %.2f",a,b,a*b);
    printf("\nQuotient is: %.2f / %.2f = %.2f",a,b,a/b);
return 0;
}