#include <stdio.h>

int main() {
    int customerID;
    char customerName[100];
    int unitsConsumed;
    float chargesPerUnit;
    float totalBill;

    // Input customer details
    printf("Enter customer ID: ");
    scanf("%d", &customerID);

    printf("Enter customer name: ");
    scanf("%s", customerName); 

    printf("Enter units consumed: ");
    scanf("%d", &unitsConsumed);

    // Calculate charges per unit based on units consumed
    if (unitsConsumed <= 300) {
        chargesPerUnit = 175;
    } else if (unitsConsumed < 600) {
        chargesPerUnit = 200;
    } else if (unitsConsumed < 800) {
        chargesPerUnit = 300;
    } else {
        chargesPerUnit = 400;
    }

    // Calculate total bill
    totalBill = unitsConsumed * chargesPerUnit;

    // Apply supercharge if bill exceeds Ksh 500
    if (totalBill > 500) {
        totalBill += totalBill * 0.2; // 20% supercharge
    }

    // Ensure minimum bill of Ksh 200
    if (totalBill < 200) {
        totalBill = 200;
    }

    // Display the output
    printf("\nCustomer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charges Per Unit: Ksh %.2f\n", chargesPerUnit);
    printf("Amount to Pay: Ksh %.2f\n", totalBill);

    return 0;
}