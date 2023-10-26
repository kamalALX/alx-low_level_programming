#include "main.h"

/**
 * *_strcat - append two strings.
 *
 * @dest: input.
 * @src: inout.
 *
 * Return: a pointer to the resulting string dest.
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	char *e = dest;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (e);
}
