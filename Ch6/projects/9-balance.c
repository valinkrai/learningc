// Author: Trenton Taylor
// Purpose: Calculate balance of loaan after each payment

#include <stdio.h>

int main (void) {
	// Declare variables
    int payments;
	float balance, interest_rate, monthly_payment, monthly_interest;
	
	// take input from user
    printf("Enter number of payments: ");
    scanf("%d", &payments);
	printf("Enter amount of loan: ");
	scanf("%f", &balance);
	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);
	
	// Calculations 
	monthly_interest = (interest_rate  * 0.01) / 12;
	
	// Output
		// Calculates inline by taking off the monthly_payement, but adding interest after

    for (int i = 1; i <- payments; i++) {
        balance = balance - monthly_payment + (balance * monthly_interest);
        printf ("Balance remaining after payment %d : %.2f\n", i, balance);
	    printf ("Balance: %.2f\n", balance);
    }
	
}