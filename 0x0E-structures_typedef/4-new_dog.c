#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - return length of string
 * @s: string to eval
 * Return: the string length
 */

int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * _strcpy - copy string pointed by src including null byteto buffer dest
 * @dest: pointer to buffer
 * @src: string to copy
 * Return: pointerr to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, a;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (a = 0; a < len; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog if success, null if failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = (char *) malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = (char *) malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
