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

	printf("Size of a char: %lu", (unsigned long)sizeof(d), "byte(s)", "\n");
	printf("Size of an int: %lu", (unsigned long)sizeof(n), "byte(s)", "\n");
	printf("Size of a long int: %lu", (unsigned long)sizeof(z), "byte(s)", "\n");
	printf("Size of a long long int: %lu", (unsigned long)sizeof(v), "byte(s)", "\n");
	printf("Size of a float: %lu", (unsigned long)sizeof(p),"byte(s)", "\n");
	return (0);
}
