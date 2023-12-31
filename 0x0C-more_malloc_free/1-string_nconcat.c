#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: string 1
 * @s2: string 2
 * @n :the first n bytes of s2 to use
 *
 * Return: pointer to the allocated memory wich contain s1 + s2.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, length, length1 = my_len(s1), length2 = my_len(s2);

	if (n < length2)
		length = length1 + n;
	else
		length = length1 + length2;
	p = malloc(sizeof(char) * length + 1);
	if (p == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0, j = 0; s1[j]; i++, j++)
		p[i] = s1[j];

	for (j = 0; s2[j] && j < n; i++, j++)
		p[i] = s2[j];
	p[length] = '\0';
	return (p);
}

/**
 * my_len - a function that calculate the length of a string
 *
 * @p: pointer the string.
 *
 * Return: the length of the string.
 */

unsigned int my_len(char *p)
{
	unsigned int i = 0;

	while (p[i] != '\0')
	{
		i++;
	}
	return (i);
}
