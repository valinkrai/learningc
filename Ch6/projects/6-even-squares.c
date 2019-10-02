// Author: Trenton Taylor
// Purpose: Calculate even squares

#include <stdio.h>

int main(void)
{
    int target, square;

    printf("Provide a number up to which you want to find all even squares: ");
    scanf("%d", &target);

    // No need to test, simply increment by 2.
    for (int i=0, square=0; square <= target; i+=2, square = i*i) {
        printf("%d\n", square);
    }
}