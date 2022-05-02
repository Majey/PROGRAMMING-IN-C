#include <stdio.h>

int main()
{
    int multidimensionalArrays[2][3][4] = {
        {{3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2}},
        {{13, 4, 56, 3}, {5, 9, 3, 5}, {3, 1, 4, 9}}
    };

    printf("%d\n", multidimensionalArrays[1][2][3]);

    return 0;
}