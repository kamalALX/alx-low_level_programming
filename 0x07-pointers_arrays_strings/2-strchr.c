#include "main.h"

/**
 * *_strchr - function that locates a character in a string.
 *
 * @s: pointer to array
 * @c: tha character that must be located
 *
 * Return: pointer to the first occurrence of the character c
 *		else return NULL
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
