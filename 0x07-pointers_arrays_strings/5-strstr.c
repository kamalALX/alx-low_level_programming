#include "main.h"

/**
 * *_strstr - This function finds the first occurrence
 *	of the substring needle in the string haystack.
 *
 * @haystack: string where the search is made
 * @needle: string whose occurence is searched in haystack
 *
 * Return: Returns a pointer to the beginning of the located
 *	substring, or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int n;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		n = 0;
		if (haystack[n] == needle[n])
		{
			do {
				if (haystack[n + 1] == '\0')
				{
					return (haystack);
				}
				n++;
			} while (haystack[n] == needle[n]);
		}
		haystack++;
	}
	return (NULL);
}
