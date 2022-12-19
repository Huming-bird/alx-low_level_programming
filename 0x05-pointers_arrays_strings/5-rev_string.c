#include "main.h"
#include <stdio.h>

/**
 * rev_string - start
 * @s: param 1
 * Return: void
 */

void rev_string(char *s)
{
	char a = s[0];
	int b, count;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
		for (b = 0; b < count; b++)
		{
			count--;
			a = s[b];
			s[b] = s[count];
			s[count] = a;
		}

	}
}
