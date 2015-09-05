// Purpose:  Computes a European Article Number check digit
// Author: Trenton Taylor

#include <stdio.h>

int main(void)
{
	int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, first_sum, second_sum, check_digit;
	
	printf("Enter the ISBN: ");
	scanf
	(
		"%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", 
		&d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12, &d13
	);
	
	first_sum = d2 + d4 + d6 + d8 + d10 + d12;
	second_sum = d1 + d3 + d5 + d7 + d9 + d11;
	
	// Let's try this without looking at the books solution first
	check_digit= 9 - (first_sum * 3 + second_sum - 1) % 10;
	
	printf("Check digit: %1d\n", check_digit);
	
	return 0;
}