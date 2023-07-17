#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - function that returns the length of a string
 * @s: string parameter
 * Return: integer
 */

int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}

/**
 * _strcpy - function that copies a string from source to destination
 * @dest: string destination
 * @src: string source
 * Return: string
 */

char _strcpy(char *dest, char *src)
{
	int i, len = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (*dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: name of dog_t
 * @age: age of dog_t
 * @owner: owner's name of dog_t
 * Return: nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int name_len, owner_len;

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	ptr->name = malloc(sizeof(char) * name_len + 1);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->owner = malloc(sizeof(char) * owner_len + 1);
	if (ptr->owner == NULL)
	{
		free(ptr);
		free(ptr->name);
		return (NULL);
	}

	_strcpy(ptr->name, name);
	ptr->age = age;
	_strcpy(ptr->owner, owner);

	return (ptr);
}
