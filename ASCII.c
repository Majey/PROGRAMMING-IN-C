#include <stdio.h>

int main()
{
	// Char conversion to integer
	char ASCII;
	printf("Please enter a character:\n");
	scanf("%c", &ASCII);
	printf("%c's integer value is:\n%22i\n", ASCII, ASCII);

	// Integer conversion to Char
	int myInt;
	printf("Please enter an integer value between 0-127:\n");
	scanf("%i", &myInt);
	printf("Char value to your %i is %c\n", myInt, myInt);
}
