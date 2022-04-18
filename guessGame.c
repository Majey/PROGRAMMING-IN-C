// user to guess a number between 0 -5
// out put if the user guessed the right number or not

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
//get random number fro time
	srand(time(NULL));

//perform a modulus operation on the number by 6 and assing it to randomNumber
//this helps us get a remaining number between 0 and 5
	int randomNumber = rand() % 6;

//user input guessing number
	int number;
	printf("Hello winner, enter a whole number between 0 - 5:\n");
	scanf("%d", &number);

// if statement	
	if (number == randomNumber)
	{
		int award = number*10000;
		printf("Yey, the lucky number is %d and you just won yourself Ksh%d\n", randomNumber, award);
	
	} else if (number > randomNumber) { 
		printf("Sorry, the lucky number is %d\n",randomNumber);
	} /*else {
		printf("\n");
	}*/
}
