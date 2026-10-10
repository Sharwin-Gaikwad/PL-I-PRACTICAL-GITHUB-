#include <stdio.h>
int main()
{
    float length,breadth;
    printf("Enter Length Of Rectangle (in cm): ");
    scanf("%f",&length);
    printf("Enter Breadth Of Rectangle (in cm): ");
    scanf("%f",&breadth);
    printf("Area Of Rectangle is (Length X Breadth) i.e : %.2f X %.2f = %.2f",length,breadth,length*breadth);
    return 0;
}