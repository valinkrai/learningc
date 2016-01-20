#include <stdio.h>

// Author: Trenton Taylor
// Program: Find Earlier Date
// Purpose: To find the earlier date of two entered dates
int main (void) {
	int month_one, day_one, year_one, month_two, day_two, year_two;
	int first_date_earlier_flag = 0;
	
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month_one, &day_one, &year_one);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month_two, &day_two, &year_two);
	
	// Test input validity
	if (month_one == 0 || month_one > 13 || day_one == 0 || day_one > 31 ||
		month_two == 0 || month_two > 13 || day_two == 0 || day_two > 31 ) {
			printf ("Invalid input, please check dates.\n");
			return 1;
	}
	
	
	// Test the year, then month, then day, to see if the date is earlier efficiently.
	// The flag is used to prevent unneeded an unneeded comparison if the year is larger.
	if (year_one < year_two) {
		first_date_earlier_flag = 1;
		
		if (first_date_earlier_flag == 0 && month_one < month_two) {
			first_date_earlier_flag = 1;
				
				if (day_one < day_two) {
					first_date_earlier_flag = 1;
				}
		}
	}
	
	printf("%d/%d/%d is ", month_one, day_one, year_one);
	if (first_date_earlier_flag) {
		printf("earlier");
	} else {
		printf("later");
	}
	
	printf(" than %d/%d/%d\n", month_two, day_two, year_two);
	
	return 0;
}