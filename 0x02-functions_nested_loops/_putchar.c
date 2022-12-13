#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints to output
 * @c: a character
 *
 * Return: int
 */

int _putchar(char c)
{
	char c;

	return (write(1, &c, 1));
}

