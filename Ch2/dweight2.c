/* Computes the dimenstional weight of s 12" x 10" x 8" box */

#include <stdio.h>

int main (void)
{
	int height = 0, length = 0, width = 0, volume, weight;
	
	//Take input from user on dimensions
	printf("Input value for height: ");
	scanf("%d", &height);
	printf("Input value for length: ");
	scanf("%d", &length);
	printf("Input value for width: ");
	scanf("%d", &width);
	
	// Calculate based on input
	volume = height * length * width;

	// Why do I suddenly get printf as soon as I'm no longer getting graded on it?
	printf("\n\nDimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (Cubic inches): %d\n", volume);
	printf("Dimensional weight: : %d\n", (volume + 165)/166));
	
	return 0;
}