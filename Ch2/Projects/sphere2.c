#include <stdio.h>
#define PI 3.1415
int main (void) {
	// Declare variables
	float volume = 0, radius = 0;
	
	// Take input for radius
	printf ("What is the value of the radius of the sphere: ");
	scanf ("%f", &radius);
	
	// Output radius
	volume = 4.0f/3.0f * PI * radius * radius * radius;
	printf ("Volume of sphere with radius %.2f: %.2f\n", radius, volume);
	
	return 0;
}