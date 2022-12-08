#include <stdio.h>

int main(void)
{
	printf("Size of a char: %c", (unsigned long)sizeof(char));
	printf("Size of an int: %d", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu", (unsigned long)sizeof(long));
	printf("Size of a long long int: %lu", (unsigned long)sizeof(double));
	printf("Size of a float: %f", (unsigned long)sizeof(float));
	return (0);
}
