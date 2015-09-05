// Purpose: reverse a two digit number

#include <stdio.h>

int main (void)
{
	int input_number, first_digit, second_digit;
	
	printf("What's the 2 digit number you wish reversed? ");
	scanf("%2d", &input_number);
	
	first_digit = input_number / 10;
	second_digit = input_number % 10;
	
	printf("Your number reversed is %1d%1d.\n", second_digit, first_digit);
	
	return 0;
}