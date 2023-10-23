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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
