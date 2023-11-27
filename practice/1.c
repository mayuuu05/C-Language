#include <stdio.h>

int main() {
    int units;
    float totalBill;

    // Prompt the user to enter the units consumed
    printf("Enter the units consumed: ");
    scanf("%d", &units);

    // Calculate the bill based on the units consumed
    if (units <= 50) {
        totalBill = units * 0.50;
    } else if (units <= 150) {
        totalBill = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 250) {
        totalBill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else {
        totalBill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    // Add additional charges, such as tax or fixed charges, if necessary
    // For this simple example, we'll assume there are no additional charges.

    // Display the total electricity bill
    printf("Total electricity bill: %.2f\n", totalBill);

    return 0;
}