// Author: Trenton Taylor
// Purpose: Print size of types

#include <stdio.h>

int main (void)
{   
    printf("%12s %4lu bytes\n", "Int:", sizeof(int));
    printf("%12s %4lu bytes\n", "Short:", sizeof(short));
    printf("%12s %4lu bytes\n", "Long:", sizeof(long));
    printf("%12s %4lu bytes\n", "Long long:", sizeof(long long));
    printf("%12s %4lu bytes\n", "Float:", sizeof(float));
    printf("%12s %4lu bytes\n", "Double:", sizeof(double));
    printf("%12s %4lu bytes\n", "Long double:", sizeof(long double));
    
    return 0;
}