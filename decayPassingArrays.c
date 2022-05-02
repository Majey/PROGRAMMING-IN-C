#include <stdio.h>

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main()
{
    int pizzaSlices[] = {2, 4, 6, 4, 9, 3};
    printArray(pizzaSlices, 6);    
}