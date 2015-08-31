// Breaks down an entered ISBN

#include <stdio.h>

int main(void)
{
	// Variables
	int gs1_prefix, groud_id, publisher_code, item_num, check_dig;
	
	// Take input
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs1_prefix, &groud_id, &publisher_code, &item_num, &check_dig);
	
	// Output
	printf("GS1 prefix: %d\n", gs1_prefix);
	printf("Group identifier: %d\n", groud_id);
	printf("Publisher code: %d\n", publisher_code);
	printf("Item number: %d\n", item_num);
	printf("Check digit: %d\n", check_dig);
	
	return 0;
}