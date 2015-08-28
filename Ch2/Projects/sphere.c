#include <stdio.h>
#define PI 3.1415
int main (void) {
	float volume, radius = 10.0f;
	
	volume = 4.0f/3.0f * PI * radius * radius * radius;
	printf ("Volume of sphere: %.2f\n", volume);
	
	return 0;
}