#include <stdio.h>
#include <string.h>

int main()
{
    printf("What is your name buddy?\n");
    char name[50];
    scanf("%49s", name);
    printf("Hey, your name is %s? Wow %s! Nice name dude!!\n\n", name, name);

    int charCount = 0;

    while (name[charCount] != '\0')
    {
        charCount ++;
    }

    printf("The number of characters in the name %s is %d\n", name, charCount);

    int charCount2 = strlen(name);
    printf("strlen(name) function: %d\n", charCount2);

    return (0);
}