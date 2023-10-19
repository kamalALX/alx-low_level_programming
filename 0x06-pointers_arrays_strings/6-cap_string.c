#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string.
 *
 * @s:input
 *
 * Return: address of pointer
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i - 1] == '\t')
		{
			s[i - 1] = ' ';
		}

		if (s[i] == ' ' || s[i] == ',' || s[i] == ';' || s[i] == '\n' ||
		s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == '\t' ||
		s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == '!' || s[i] == '.')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] -= 32;
			}
		}
	}
	s[i - 1] = '\0';
	return (s);
}
