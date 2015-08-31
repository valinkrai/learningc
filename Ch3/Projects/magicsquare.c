// Project: Magic Square
// Purpose: Prints 16 numbers in a magic square and returns relevant sums
// Author: Trenton Taylor

#include <stdio.h>

int main(void)
{
	// Variables
		// Names should be created like coordinates with alpabetic coordinates
		// on top, and numeric coordinates on side
	int a1, a2, a3, a4,
		b1, b2, b3, b4,
		c1, c2, c3, c4,
		d1, d2, d3, d4;
	
	// Take input
	printf("Enter the numbers 1 to 16 in any order :\n");
	scanf
	(
		"%d %d %d %d"
		"%d %d %d %d"
		"%d %d %d %d"
		"%d %d %d %d",	
		
		&a1, &a2, &a3, &a4,
		&b1, &b2, &b3, &b4,
		&c1, &c2, &c3, &c4,
		&d1, &d2, &d3, &d4
	);
	
	// Output
		// I like this project a lot because it makes doing stuff like this in
		// terms of code formatting worthwhile.
	printf
	(
		"\n"
		"\t%2d %2d %2d %2d\n"
		"\t%2d %2d %2d %2d\n"
		"\t%2d %2d %2d %2d\n"
		"\t%2d %2d %2d %2d\n"
		"\n",
		
		a1, a2, a3, a4,
		b1, b2, b3, b4,
		c1, c2, c3, c4,
		d1, d2, d3, d4
	);
	
	// These do the math in the printf statement to calculate the row, Column
	// and diagonal sums
	
	printf
	(
		"Row sums:\t%3d%3d%3d%3d\n",
		a1 + a2 + a3 + a4,
		b1 + b2 + b3 + b4,
		c1 + c2 + c3 + c4,
		d1 + d2 + d3 + d4
	);
	printf
	(
		"Column sums:\t%3d%3d%3d%3d\n",
		a1 + b1 + c1 + d1,
		a2 + b2 + c2 + d2,
		a3 + b3 + c3 + d3,
		a4 + b4 + c4 + d4
	);
	printf
	(
		"Diagonal sums:\t%3d%3d\n",
		a1 + b2 + c3 + d4,
		a4 + b3 + c2 + d1
	);
	
	
	
	return 0;
}