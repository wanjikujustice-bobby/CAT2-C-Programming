#include <stdio.h>

int main() {
    float hours, rate, gross_pay, tax, net_pay;
    
    // Ask user to enter hours and rate
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &rate);
    
    // Calculate gross pay
    if (hours > 40)
        gross_pay = (40 * rate) + ((hours - 40) * rate * 1.5);  // overtime
    else
        gross_pay = hours * rate;
    
    // Calculate tax
    if (gross_pay <= 600)
        tax = gross_pay * 0.15;
    else
        tax = (600 * 0.15) + ((gross_pay - 600) * 0.20);
    
    // Calculate net pay
    net_pay = gross_pay - tax;
    
    // Display results
    printf("\nGross Pay: %.2f", gross_pay);
    printf("\nTax: %.2f", tax);
    printf("\nNet Pay: %.2f\n", net_pay);
    
    return 0;
}