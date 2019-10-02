// Author: Trenton Taylor
// Purpose: Calculate constant e

#include <stdio.h>

int main(void)
{
    int e, n;
    unsigned long factorial;
    long double result = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        factorial=1;
        
        for(int j = 1; j < i; j++) {
            factorial *= j;
        }
        result += (long double)1.0/(long double)factorial;
    }

    printf("Is is approx. %.60Lf\n", result);
}