#include <stdio.h>

int main (void)
{
	float x = 23.44231;
	
	printf("%-8.1e\n", x);
	printf("%10.6e\n", x);
	printf("%-8.3f\n", x);
	printf("%6.0f\n", x);
}