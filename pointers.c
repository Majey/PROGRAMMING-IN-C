#include <stdio.h>

int main()
{
    int slices = 20;
    int *s = &slices;

    printf("Slices: %d\n", slices);
    printf("Pointer slices: %d\n", *s);
}