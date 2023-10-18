#include <stdio.h>

/**
 * *string_toupper - change all lowercase letters of a string to uppercase
 *
 * @s: input
 *
 * Return: return value of pointer.
 */



char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
