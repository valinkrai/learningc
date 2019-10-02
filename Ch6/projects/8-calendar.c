// Author: Trenton Taylor
// Purpose: Print a 1 month calendar

#include <stdio.h>

int main(void)
{
    int daysInMonth, dayOfWeek;

    printf("Enter number of days in the month: ");
    scanf("%d", &daysInMonth);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &dayOfWeek);

    // Print initial day of the week offset
    for (int i = 1; i < dayOfWeek; i++) {
        printf("   ");
    }

    for (int i = 1; i <= daysInMonth; i++, dayOfWeek++) {
        if (dayOfWeek == 8) {
            printf("\n");
            dayOfWeek=1;
        }
        printf("%3d", i);
    }
    
    // Print final newline
    printf("\n");

    return 0;
}