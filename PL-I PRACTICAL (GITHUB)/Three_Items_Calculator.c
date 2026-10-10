#include <stdio.h>

int main() {
    float item1, item2, item3, final_amount;

    printf("Enter the cost of item 1: ");
    scanf("%f", &item1);

    printf("Enter the cost of item 2: ");
    scanf("%f", &item2);

    printf("Enter the cost of item 3: ");
    scanf("%f", &item3);

    final_amount = item1 + item2 + item3;

    printf("The final amount is: %.2f\n", final_amount);

    return 0;
}