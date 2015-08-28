#include <stdio.h>

int main (void) {
	// Declare variables
	float balance, interest_rate, monthly_payment, monthly_interest;
	
	// take input from user
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
	printf ("Balance remaining after first payment: %.2f\n", balance = balance - monthly_payment + (balance * monthly_interest));
	printf ("Balance: %.2f\n", balance);
	printf ("Balance remaining after second payment: %.2f\n", balance = balance - monthly_payment + (balance * monthly_interest));
	printf ("Balance: %.2f\n", balance);
	printf ("Balance remaining after third payment: %.2f\n", balance = balance - monthly_payment + (balance * monthly_interest));
	printf ("Balance: %.2f\n", balance);
}