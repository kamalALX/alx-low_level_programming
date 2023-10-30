#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: - returns a pointer to a newly allocated space in memory
 *		which contains the appended strings.
 *		- return NULL on failure.
*/

char *str_concat(char *s1, char *s2)
{
	int l1, i, j;
	char *p;

	l1 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != '\0' || s2[l1] != '\0')
		l1++;
	p = (char *) malloc(sizeof(char) * (l1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= (l1); i++)
	{
		p[i] = s1[i];
		if (p[i] == '\0')
		{
			for (j = 0 ; i <= (l1); i++, j++)
				p[i] = s2[j];
		}
	}
	return (p);
}
