#include <stdio.h>

int main (void)
{
	int input_number, temp_number, digit_1, digit_2, digit_3, digit_4, digit_5;
	
	// Take input_number
	printf("Enter a number between 0 and 32767: ");
	scanf("%5d",  &input_number);
	
	//Math
	temp_number = input_number;
	digit_5 = temp_number % 8;
	temp_number /= 8;
	digit_4 = temp_number % 8;
	temp_number /= 8;
	digit_3 = temp_number % 8;
	temp_number /= 8;
	digit_2 = temp_number % 8;
	temp_number /= 8;
	digit_1 = temp_number % 8;
	
	// Output
	printf("In octal, your number is: %1d%1d%1d%1d%1d\n", digit_1, digit_2, digit_3, digit_4, digit_5);
	
}