#include "main.h"

/**
 * *_strncat - Write a function that concatenates two strings.
 *
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: Return a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	char *e = dest;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
			dest[i + j] = src[j];
	}
	if (j < n)
		dest[i + j] = '\0';
	return (e);
}
