#include <stdio.h>

int main(void)
{
	int month, day, year;
	
	// Take Input
	printf("Enter a date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month, &day, &year);
	
	// Output
	printf("You entered the date %.2d%.2d%.4d\n", month, day, year);
	
	return 0;
}