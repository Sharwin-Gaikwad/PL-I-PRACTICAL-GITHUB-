#include <stdio.h>
int main(){
    int a,b;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    printf("Addition is: %d + %d = %d",a,b,a+b);
    printf("\nDifference is: %d - %d = %d",a,b,a-b);
    printf("\nMultiplication is: %d X %d = %d",a,b,a*b);
    printf("\nQuotient is: %d / %d = %d",a,b,a/b);
return 0;
}