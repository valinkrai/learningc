// Author: Trenton Taylor
// Purpose: Calculate GCD

#include <stdio.h>
#include <stdbool.h>

int main (void) 
{
    int num1, num2, remain;
    remain = 0;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    while(true){
        if (num2==0) {
            printf("GCD is %d\n", num1);
            break;
        } else {
            remain = num1 % num2;
            num1 = num2;
            num2 = remain;
        }
    }
    

}