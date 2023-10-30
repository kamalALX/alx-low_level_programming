#include "main.h"

/**
 * _strdup - function that returns a pointer to
 *		a newly allocated space in memory,
 *		which contains a copy of the string given as a parameter.
 *
 * @str: pointer to string to be copied.
 *
 * Return: returns a pointer to a new string.
 *	- returns NULL if str = NULL.
 *	returns NULL if insufficient memory was available.
*/

char *_strdup(char *str)
{
	char *p;
	int l = 0, i;

	if (str == NULL)
		return (NULL);
	while (str[l] != '\0')
	{
		l++;
	}
	p = (char *) malloc(sizeof(char) * (l + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= l; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
