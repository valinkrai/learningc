#include <stdio.h>
#include <stdbool.h>

// Author: Trenton Taylor
// Program: Find Earlier Date
// Purpose: To find the earlier date of two entered dates
int main (void) {
	int earliest_year, earliest_month, earliest_day;
    int year, month, day;
    bool date_earlier_flag;

    // Preset earliest dates to max
    earliest_year = 99;
    earliest_month = 12;
    earliest_day = 31;
	

    for(;;){
        
        date_earlier_flag = false;

        printf("Enter a date (mm/dd/yy): ");
        scanf("%2d/%2d/%2d", &month, &day, &year);

        
        // Replacing original validity tesitng with zero testing
        if (!(year || month || day)) {
                break;
        }
        
        
        // Test the year, then month, then day, to see if the date is earlier efficiently.
        // The flag is used to prevent unneeded an unneeded comparison if the year is larger.
        if (year < earliest_year) {
            date_earlier_flag = true;
        } else if (year == earliest_year && month < earliest_month) {
            date_earlier_flag = true;
        } else if ( month == earliest_month && day < earliest_day) {
            date_earlier_flag = true;
        }
        if (date_earlier_flag) {
            earliest_year = year;
            earliest_month = month;
            earliest_day = day;
        }
    }

	printf("%02d/%02d/%02d is earliest date.\n", earliest_month, earliest_day, earliest_year);

	
	return 0;
}