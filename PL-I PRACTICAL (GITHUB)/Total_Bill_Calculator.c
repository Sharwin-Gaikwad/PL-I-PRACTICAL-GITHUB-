#include <stdio.h>

int main() {
    float price, total_bill;
    int quantity;

    printf("Enter the price of the product: ");
    scanf("%f", &price);

    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    total_bill = price * quantity;

    printf("The total bill is: %.2f\n", total_bill);

    return 0;
}