#incldue <stdio.h>
#include <stdbool.h>

// Purpose: Translate time from 24 hour format to AM/PM format
// Author: Trenton Taylor
// Date 9/14/2015

int main (void)
{
	int hour, minutes;
	int hour_ampm, minutes_ampm;
	bool pm;
	// Deciding between effecient and readable is hard sometimes. HMM
	// I'll try for effeciency.
	
	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &hour, &minutes);
	
	// super lame basic input validation. I'd make a loop, but since it's not
	// asking for too much error checkin in the book, i figured I'd keep it
	// simple for now.'
	
	if (hour > 24 || hour < 0 || minutes > 59 || minutes < 0) {
		printf("Invalid time. Only appropriate values are permitted.");
		return 1;
	}
	
	// Logic
		// I'm going to try and make it use if statements nested in the output
		// to theoretically save a few bytes of memory.
	if (hour >= 12) {
		// Set flag that time is PM
		pm = true;
		
		// Futher test that the hour is not 12
		if (hour > 12) {
			hour_ampm = hour - 12;
		}
		
	} else {
		if (hour == 0) {
			// Makes sure 12 am doesn't show up as 0 am;
			hour_ampm = 12;
		}
	}
	
	// Output
	printf("Equialent 12-hour time: %2d:%2d ", hour_ampm, minutes_ampm);
	if (pm) {
		printf("PM\n");
	} else {
		printf("AM\n");
	}
	
	return 0;
}