// Author: Trenton Taylor
// Purpose: Calculate constant e

#include <stdio.h>

int main(void)
{
    long double min_term;
    unsigned long factorial;
    long double term = 1;
    long double result = 0;
    int i = 1;

    printf("Enter the smallest desired term: ");
    scanf("%Lf", &min_term);

    while (term > min_term) {
        factorial=1;
        
        for(int j = 1; j < i; j++) {
            factorial *= j;
        }
        term = (long double)1.0/(long double)factorial;
        printf("%Lf\n", term);
        result += term;
        i++;
    }

    printf("Is is approx. %.60Lf\n", result);
}