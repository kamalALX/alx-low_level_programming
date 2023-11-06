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
	int i;

	for (i = 0 ; src[i] != '\0'; i++)
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

	while (str[length] != '\0')
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
	int name_length, owner_length;
	dog_t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	name_length = _strlen(name);
	owner_length = _strlen(owner);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = malloc(name_length + 1);
	doggo->owner = malloc(owner_length + 1);

	if (doggo->name == NULL || doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo->owner);
		free(doggo);
		return (NULL);
	}

	_strcopy(doggo->name, name);
	_strcopy(doggo->owner, owner);
	doggo->age = age;

	return (doggo);
}
