#include <stdio.h>

int main()
{
	int eggs;
	printf("Please enter the number of eggs:\n");
	scanf("%i", &eggs);
	double trays = (double) eggs/12;
	printf("For %i eggs there are %f trays\n", eggs, trays);
	return 0;
}
