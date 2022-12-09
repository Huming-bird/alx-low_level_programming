#include <stdio.h>
#include <time.h>

/**                                                                                                                                                            * main - start of program                                                                                                                                     * Return: returns integer dtype                                                                                                                               * @n: holds the data to be tested                                                                                                                             */

int main(void)

{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	printf("%d is positive\n", n);
	return (0);
}

