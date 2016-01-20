#include <stdio.h>

int main (void)
{
	int i1, i2, i3, i4, current_max, current_min;
	printf("Enter four numbers seperated by spaces: ");
	scanf("%d %d %d %d", &i1, &i2, &i3, &i4);
	current_max = i1;
	current_min = i1;
	
	if (i2 > current_max)
	{
		current_max = i2;
	} else if (i2 < current_min) {
				current_min = i2;
	}
	
	if (i3 > current_max)
	{
		current_max = i3;
	} else if (i3 < current_min) {
				current_min = i3;
	}
	
	if (i4 > current_max)
	{
		current_max = i4;
	} else if (i4 < current_min) {
				current_min = i4;
	}
	
	printf("Largest: %d\n", current_max);
	printf("Smallest: %d\n", current_min);
}