// Purpose: To calculate a brokers commission
// Author: Trenton Taylor
// Date: 9/5/2015

#include <stdio.h>

int main (void)
{
	float commission, value;
	
	printf("Enter value of a trade: ");
	scanf("%f", &value);

	// I'm still deciding which bracketing style I like better, but I'm leaning
	// toward OTB, but I'll try this for now.
	if (value < 2500.00f)
	{
		commission = 30.00f + .017f * value;
	} 
	else if (value < 6250.00f)
	{
		commission = 56.00f + .0066f * value;
	}
	else if (value < 20000.00f)
	{
		commission = 76.00f + .0034f * value;
	}
	else if (value < 50000.00f)
	{
		commission = 100.00f + .0022f * value;
	}
	else if (value < 500000.00f)
	{
		commission = 255.00f + .0009f * value;
	}
	
	if (commission < 39.00f)
	{
		commission = 39.00f;
	}
	
	printf("Commission: $%1.2f\n", commission);
	
	return 0;
}