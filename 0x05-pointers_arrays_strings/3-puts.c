#include "main.h"
#include <stdio.h>

/**
 * _puts - start
 * @str: param1
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(str++);
	}
	_putchar('\n');
}
