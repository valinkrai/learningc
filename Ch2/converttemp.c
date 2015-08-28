/* Converts a temperture to celsius */
#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main (void) {
	float fahrenheit, celsius;
	printf("Enter fahrenheit temperture: ");
	scanf("%f", &fahrenheit);
	
	celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
	
	printf("Celsius equivalent: %.2f\n", celsius);
	return 0;
}