
#include <stdio.h>
#define F 32.0f
#define S (5.0f/9.0f)
int main (void){float f,c;printf("Enter fahrenheit temperture: ");scanf("%f",&f);c=(f-F)*S;printf("Celsius equivalent: %.2f\n",c);return 0;}