#include <stdio.h>

int main()
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

