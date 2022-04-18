#include <stdio.h>

// Factorial function

int main()
{
    int num;
    int n;
    int factorial = 1;
    
    printf("Kindly enter a number:\n");
    scanf("%i", &num); // Get and store number entered by user

    // For loop calculating factorial
    for (n=1; n <= num; n++)
    {
        factorial = factorial * n;
	printf("%i\n", factorial);
    }
	
    printf("%i\n", factorial);
    return factorial;
}
