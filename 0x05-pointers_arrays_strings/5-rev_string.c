#include "main.h"

/**
 * rev_string - a function that reverses a string.
 *
 * @s: input.
 */

void rev_string(char *s)
{
	int n = 0, length, start, end;
	char swap;

	while (s[n] != '\0')
	{
		n++;
	}
	length = n;

	start = 0;
	end = length - 1;

	while (start < end)
	{
		swap = s[start];
		s[start] = s[end];
		s[end] = swap;
		start++;
		end--;
	}
}
