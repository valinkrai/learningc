// Author: Trenton Taylor
// Purpose: print table of squares

#include <stdio.h>
#include <stdbool.h>

int main (void) {
    int num = 1;
    while(true) {
        for(i=num; i > 0; i--){
            if (num % i == 0){
                print(num);
                break;
            }
        }
        i++
    }
}

