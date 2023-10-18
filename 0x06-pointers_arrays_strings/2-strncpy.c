#include "main.h"

/**
 * *_strncpy - a function that copies a string.
 *
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *e = dest;
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		*dest = src[j];
		dest++;
	}
	while (j < n)
	{
		*dest = '\0';
		dest++;
		j++;
	}
	return (e);
}
