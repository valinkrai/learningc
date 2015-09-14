#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	int age;
	bool teenager;
	for (age = 1; age < 25; age++) {
		teenager = age >= 13 && age <= 19 ? true : false;
		printf("Teenager is %d for age %d\n", teenager, age);
	}
	
}