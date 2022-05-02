#include <stdio.h>


int main()
{
    int input;
 
    do 
    {
        printf("Please enter a number greater than 5:\n");
        scanf("%i", &input);
        printf("%i is less than 5\n", input);
    } while(input < 5);
        
}
