// Purpose:  Computes a Universal Product Code check digit
// Author: Trenton Taylor

#include <stdio.h>

int main(void)
{
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, check_digit;
	
	printf("Enter the ISBN: ");
	scanf
	(
		"%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", 
		&d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5
	);
	
	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	
	// Let's try this without looking at the books solution first
	check_digit= 9 - (first_sum * 3 + second_sum - 1) % 10;
	
	printf("Check digit: %1d\n", check_digit);
	
	return 0;
}