#include <stdio.h>

int main()
{
    int num;
    printf("Kindly enter a number and wait for magic:\n");
    scanf("%i", &num);

    for (int i=0; i <= num; i++)
    {
        //printf("%d\n", i);

        for (int k=i; k>=0; k--)
        {
            printf("%d ", k);
        }

        printf("\n");
    }
}