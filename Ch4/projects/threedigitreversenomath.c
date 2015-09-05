// Purpose: reverse a two digit number

#include <stdio.h>

int main (void)
{
	int first_digit, second_digit, third_digit;
	
	printf("What's the 3 digit number you wish reversed? ");
	scanf("%1d%1d%1d", &first_digit, &second_digit, &third_digit);
	
	printf("Your number reversed is %1d%1d%1d.\n", third_digit, second_digit, first_digit);
	
	return 0;
}