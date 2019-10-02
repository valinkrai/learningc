// Author: Trenton Taylor
// Purpose: Approximate sqrt using newton's method

#include <stdio.h>
#include <math.h>


int main (void)
{
    int x;
    double y = 1; // What we'll divide with
    double new_y; // To store new y temporarily
    double z;  // Result of division

    printf("Enter  a positive number: ");
    scanf("%d", &x);

    for (;;) {
        z = x/y;

        new_y = (y+z)/2;

        if (fabs(new_y - y) < (y * 0.00001)) {
            y = new_y;
            break;
        } else {
            y = new_y;
        }
    }

    printf("Square root: %f\n", y);
}

