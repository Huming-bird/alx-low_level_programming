#include <stdio.h>
#include "main.h"

/**
 * _isdigit - start
 * @c: paramter
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
