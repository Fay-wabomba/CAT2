#include <stdio.h>

int main() {
    float salary, tax = 0;

    // Input yearly salary
    printf("Enter the yearly salary of the employee: ");
    scanf("%f", &salary);

    // Calculate tax based on salary
    if (salary <= 400000) {
        tax = salary * 0.01; // 1% tax
    } else if (salary > 400000 && salary <= 1000000) { 
        tax = 40000 * 0.01 + (salary - 400000) * 0.15; // 1% tax on first 400000, 15% on remaining
    } else {
        tax = 40000 * 0.01 + 600000 * 0.15 + (salary - 1000000) * 0.25;// 1% of first 4000000,15% for the next 6000000 and 25% on remaining amount
    }

    // Display the calculated tax
    printf("Tax to be paid: %.2f\n", tax);

    return 0;
}