#include <stdio.h>

int main()
{
    for(int i=0; i<=1000; i++)
    {
        printf("%d\n", i);
        if(i == 989)
        {
            printf("*************************************************\n We're almost there \n*************************************************\n");
            continue;
        }
    }
}