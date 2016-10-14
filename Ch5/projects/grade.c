#include <stdio.h>
#include <stdbool.h>


int main(void)
{
	int grade = 0;
	char letterGrade = 'F';
	
	// Input
	printf("Enter numerical grade: ");
	scanf("%d", &grade);
	
#define _CRT_SECURE_NO_WARNINGS
	// Logic
	// Uses mod to find first digit
	printf("Grade before: %d", grade);
	grade = grade / 10;
	printf("Grade after: %d", grade);

	// Determine grade
	switch (grade)
	{
		case 0: case 1: case 2: case 3: case 4: case 5:
			letterGrade = 'F';
			break;
		case 6:
			letterGrade = 'D';
			break;
		case 7:
			letterGrade = 'C';
			break;
		case 8:
			letterGrade = 'B';
			break;
		default:
			letterGrade = 'A';
			break;
	}

	// Output
	printf("Letter grade: %c", letterGrade);
}