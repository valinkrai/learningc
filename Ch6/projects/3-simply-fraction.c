// Author: Trenton Taylor
// Purpose: Simply fractions to lowest terms.
#import <stdio.h>
#import <stdbool.h>


int main (void) 
{
    int numerator, denominator, num1, num2;
    int gcd, remain;
    remain = 0;
    gcd = 1;

    

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    num1 = numerator;
    num2 = denominator;

    while(true){
        if (num2==0) {
            gcd = num1;
            break;
        } else {
            remain = num1 % num2;
            num1 = num2;
            num2 = remain;
        }
    }
    
    numerator /= gcd;
    denominator /= gcd;

    printf("In lowest terms: %d/%d\n", numerator, denominator);
}