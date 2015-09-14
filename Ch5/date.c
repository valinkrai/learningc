// Author: Trenton Taylor
// Purpose: Prints a date in legal format
// Date 9/6/2015

#include <stdio.h>

// Obviously given up on messing with thigns other than OTB
// LLAP OTB

int main(void)
{
	int month, day, year;
	
	
	
	printf("Date (mm/dd/yy): ");
	scanf("%d / %d / %d", &month, &day, &year);

	
	
	// I don't like that yyyy format years will mess it up, so I'm going to 
	// mess with having it turn years greater than 99 into  a correct date. I
	// could just take it in as yyyy, or get ahead and figure out do while, but
	// this seemed to try and practice last chapters skills well.
	
	// Yay this gets rid of anything in excess of 99. FIRST TRY TOO!
	
	if (year > 99) {
		year %= 100;	
	}
	
	printf("Dated this %d", day);
	
	switch (day) {
		case 1: case 21: case 31:
			printf("st");
			break;
		case 2: case 22:
			printf("nd");
			break;
		case 3: case 23:
			printf("rd");
			break;
		default:
			printf("th");
			break;
	}
	printf(" day of ");
	
	switch (month) {
		case 1:  printf("January");		break;
		case 2:  printf("February");	break;
		case 3:  printf("March");		break;
		case 4:  printf("April");		break;
		case 5:  printf("May"); 		break;
		case 6:  printf("June"); 		break;
		case 7:  printf("July"); 		break;
		case 8:  printf("August"); 		break;
		case 9:  printf("September");	break;
		case 10: printf("October");		break;
		case 11: printf("November");	break;
		case 12: printf("December");	break;
	}
	
	// I love that this is how y2k happened and the book is like lol do this
	printf(", 20%.2d.\n", year);
	
	return 0;
}