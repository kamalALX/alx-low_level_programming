#include "main.h"

/**
 * _strspn -  function that gets the length of a prefix substring.
 *
 * @s: pointer to array
 * @accept: pointer to array
 *
 * Return: the number of bytes in the initial segment
 *	of s which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
		break;
		}
		i++;
	}
	return (count);
}
