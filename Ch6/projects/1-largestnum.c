// Author: Trenton Taylor
// Purpose: find largest of many numbers to stdin

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    double currentNum, largestNum;
    bool moreNumbers = true;
    largestNum = 0;
    

    for (;;) {
        printf("Enter a number: ");
        scanf("%lf", &currentNum);

        if (currentNum <= 0) {
            break;
        } else if (currentNum > largestNum) {
            largestNum = currentNum;
        }
    }

    printf("The largest number entered was %lf\n", largestNum);

    return 0;
}