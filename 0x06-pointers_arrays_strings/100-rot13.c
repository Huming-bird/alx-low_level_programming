#include "main.h"

/**
 * rot13 - start
 * @p: pointer
 * Return: char
 */

char *rot13(char *p)
{
	int a, b;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; p[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (p[a] == s1[b])
			{
				p[a] = s2[b];
				break;
			}
		}
	}
	return (p);
}
