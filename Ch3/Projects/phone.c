// Reformat a phone number

#include <stdio.h>

int main(void)
{
	// Variables
	int phonegroup_1, phonegroup_2, phonegroup_3;
	
	// Take input
	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &phonegroup_1, &phonegroup_2, &phonegroup_3);
	
	// Output
	printf("You entered %.3d.%.3d.%.4d\n", phonegroup_1, phonegroup_2, phonegroup_3);
	
	return 0;
}