#include <stdio.h>

int main() {
    float principal, rate, balance; // Changed to float
    int years, i;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the annual interest rate (in %%): ");
    scanf("%f", &rate);
    printf("Enter the number of years: ");
    scanf("%d", &years);

    balance = principal;
    
    for(i = 1; i <= years; i++) {
        // Now division will result in a decimal (e.g., 0.05)
        float interest = balance * (rate / 100.0); 
        balance = balance + interest;
       
        printf("Year %d: Balance = %.2f\n", i, balance); // %.2f shows 2 decimal places
    }

    printf("After %d years, the final balance is: %.2f\n", years, balance);

    return 0;
}