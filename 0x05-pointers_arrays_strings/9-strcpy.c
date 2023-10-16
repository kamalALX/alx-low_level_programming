#include "main.h"

/**
 * _strcpy - copies the string pointed to by src.
 *
 * @dest: input
 * @src: input
 *
 * Return: return the value of pointer dest.
*/

char *_strcpy(char *dest, char *src)
{
	int length = _strlen(src);
	int i;

	for (i = 0; i <= length; i++)
	{
		*dest = src[i];
		dest++;
	}
	*dest = '\0';
	return (dest);
}

