#include <stdio.h>

int main(void)
{
	char *str = "Hello world!";
	printf("%s\n", str);
	puts(str);
	printf("%.5s\n", str);
	printf("%20.5s\n", str);
}
