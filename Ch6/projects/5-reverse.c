// Purpose: reverse a two digit number

#include <stdio.h>

int main (void)
{
	int number, last_digit;
	
	printf("What's the number you wish reversed? ");
	scanf("%d", &number);

	printf("Your number reversed is: ");
    
    // In leiu of storing results as we go, output as we go.
	do {
        last_digit = number % 10;
        number /= 10;
        printf("%d", last_digit);
    } while (number != 0);
	// This calculates each digit using simple int division, storing the result, and subtracting each digit as it finds it to get the next digit
	
    // Print final newline
    printf("\n");
	
	return 0;
}