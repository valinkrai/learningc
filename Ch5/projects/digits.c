#include <stdio.h>

// Purpose: State number of digits in a given input
// Author: Trenton Taylor
// Date: 9/13/2015

int main (void)
{
	// Define variables
	int current_exponent = 1, input_number;
	int keep_testing = 1;
	
	printf("Enter a number: ");
	scanf("%d", &input_number);
	
	// I don't know if I like this code, but it's 10 at night and I just want
	// to write a program. Sorry confused future trent.
	printf("Debug 1\n");
	
	while (keep_testing = 1) {
		printf("Debug 2\n");
		if (input_number / current_exponent > 10) {
				printf("Debug 3\n");
				current_exponent *= 10;
				keep_testing = 1;
				printf("current_exponent = %d input_number / current_exponent = %d\n", current_exponent, input_number / current_exponent);
		} else {
			printf("Debug 4\n");
			keep_testing = 0;
		}
	}
	
	printf("The number %d has %d digits.\n", input_number, current_exponent);
	
	
	return 0;	
}