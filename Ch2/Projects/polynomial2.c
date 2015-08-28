#include <stdio.h>

int main (void) {
	float x, polynomial;
	
	// Take input for value of x
	printf("Enter the value of X: ");
	scanf("%f", &x);
	
	// Do math
	polynomial = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
	
	// Output
	printf("The value of the polynomial is %.2f\n", polynomial);
	
}