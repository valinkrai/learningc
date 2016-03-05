#include <stdio.h>

int main () {
	int wind_force;
	
	printf("Enter wind speed in knots: ");
	scanf("%d", &wind_force);
	printf("Wind speed: %d \n", wind_force);
	// Putting this here to keep code clean and non-redundant
	printf("Description: ");
	
	
	if (wind_force < 0) {
		printf("Negative wind forces not allowed.\n");
	} else if (wind_force < 1) {
		printf("Calm");
	} else if (wind_force <= 3) {
		printf("Light air");
	} else if (wind_force <= 27) {
		printf("Breeze");
	} else if (wind_force <= 47) {
		printf("Gale");
	} else if (wind_force <= 63) {
		printf("Storm");
	} else {
		printf("Hurricane");
	}
	
	return 0;
}