#include <stdio.h>

int main()
{
    for(int i=0; i<1000000; i++)
    {        
        if (i==99999)
        {
            printf("i is %i \n End the count!\n End the count!!\n End the count!!!\n", i);
            break;
        }

        printf("i is %i\n", i);
    }
}