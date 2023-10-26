#include "main.h"

/**
 *  _strlen - a function that returns the length of a string.
 *
 *  @s: input.
 *
 * Return: return n.
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
