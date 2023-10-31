#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments of the program
 *
 * @ac: count of args passed to the function
 * @av:array of arguments
 *
 * Return: pointer to the new string.
*/

char *argstostr(int ac, char **av)
{
	int i, j, l = 0;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			l++;
		}
	}
	p = (char *)malloc(l + ac + 1);
	if (p == NULL)
	{
		return (NULL);
	}

	l = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[l] = av[i][j];
			l++;
		}
		p[l] = '\n';
		l++;
	}
	p[l] = '\0';
	return (p);
}
