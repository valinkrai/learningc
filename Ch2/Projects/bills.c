// Not on capitol hill
// Purpose find total bills needed
#include <stdio.h>

int main (void) {
	int dollar_amount, twenties, tens, fives, ones;
	
	// Take Input
	printf("Enter a dollar amount: ");
	scanf("%d", &dollar_amount);
	
	// Calculates number needed of each bill by figuring out the total so far each time, then dividing.
	// Could try making more efficient if more denominations were used like coines or 50s and 100s by using
	// a calculation for the amount of the dollar_amount that doesn't have bills assigned to it yet
	// more lines, but it could be less messy.
	twenties = dollar_amount / 20;
	tens = (dollar_amount - (twenties * 20)) / 10;
	fives = (dollar_amount - (twenties * 20 + tens * 10)) / 5;
	ones = (dollar_amount - (twenties * 20 + tens * 10 + fives * 5));
	
	printf ("\n$20 bills: %d\n", twenties);
	printf ("$10 bills: %d\n", tens);
	printf (" $5 bills: %d\n", fives);
	printf (" $1 bills: %d\n", ones);
	
	return 0;
}