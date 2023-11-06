#include "dog.h"

/**
 * _strcopy - copy the string pointed by src into dest.
 *
 * @dest:pointer to the string to copy
 * @src: buffer storing string to copy.
 *
 * Return:returns copied string
*/

char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0 ; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - a function thtan calculate the length of a string.
 *
 * @str: string.
 *
 * Return: returns length of string
*/

int _strlen(char *str)
{
	int length = 0;

	while (str)
		length++;

	return (length);
}

/**
 * new_dog - a function that creates a new dog.
 *
 * @name: member
 * @age: member
 * @owner: member
 *
 * Return: return NULL if the function fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	newdog->name = _strcopy(newdog->name, name);
	newdog->age = age;
	newdog->owner = _strcopy(newdog->owner, owner);

	return (newdog);
}
