// Purpose: reverse a two digit number

#include <stdio.h>

int main (void)
{
	int input_number, first_digit, second_digit, third_digit;
	
	printf("What's the 3 digit number you wish reversed? ");
	scanf("%3d", &input_number);
	
	
	// This calculates each digit using simple int division, storing the result, and subtracting each digit as it finds it to get the next digit
	first_digit = input_number / 100;
	second_digit = (input_number - first_digit * 100) / 10;
	third_digit = input_number - first_digit * 100 - second_digit * 10;
	
	printf("Your number reversed is %1d%1d%1d.\n", third_digit, second_digit, first_digit);
	
	return 0;
}