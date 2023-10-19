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
		if (s[i - 1] != 9 && s[i - 1] != ',' && s[i - 1] != ';' && s[i - 1] != '!')
		{
			if (s[i - 1] != '?' && s[i - 1] != '"' && s[i - 1] != '(')
			{
				if (s[i - 1] != ')' && s[i - 1] != '{' && s[i - 1] != '}')
				{
					if (s[i] >= 97 && s[i] <= 122)
					{
						s[i] = s[i] - 32;
					}
					while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
						i++;
				}
			}
		}
		else
			s[i - 1] = ' ';
	}
	return (s);
}
