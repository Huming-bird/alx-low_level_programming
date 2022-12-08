#include <stdio.h>

/**
 * main - start of program
 * Return: Always 0
 */

int main(void)
{
	char d;
	int n;
	float p;
	long z;
	double v;

	printf("Size of a char: %c", (char)sizeof(d),"\n");
	printf("Size of an int: %d", (unsigned long)sizeof(n),"\n");
	printf("Size of a long int: %lu", (unsigned long)sizeof(z),"\n");
	printf("Size of a long long int: %lu", (unsigned long)sizeof(v),"\n");
	printf("Size of a float: %f", (unsigned long)sizeof(p),"\n");
	return (0);
}
