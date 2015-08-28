#include <stdio.h>
#define TAX_RATE .05f
int main (void) {
	float amount;
	
	// Take input
	printf ("Enter an amount: ");
	scanf ("%f", &amount);
	
	// Output
	printf ("With tax added: $%.2f\n", amount + (amount * TAX_RATE));
}