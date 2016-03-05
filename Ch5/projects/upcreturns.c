// Purpose:  Computes a Universal Product Code check digit
// Author: Trenton Taylor

#include <stdio.h>

int main(void)
{
	int d1, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, d2, check_digit;
	
	printf("Enter the UPC as a 12 digit number, with no dashes or seperators: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &d2);
	/*
	printf("Enter the first (single) digit: ");
	scanf("%1d", &d1);
	printf("Enter first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
	printf("Enter the second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
	*/
	first_sum = d1 + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	//printf("Enter the last (single) digit: ");
	//scanf("%1d", &d2);
	
	// Let's try this without looking at the books solution first
	check_digit= 9 - (first_sum * 3 + second_sum - 1) % 10;
	if (check_digit == d2)
	{
		printf("VALID");
	} else {
		printf("NOT VALID");
	}
	//printf("Check digit: %1d\n", check_digit);
	
	return 0;
}