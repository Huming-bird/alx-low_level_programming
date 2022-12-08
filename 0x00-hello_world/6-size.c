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

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(n));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(z));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(v));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(p));
	return (0);
}
