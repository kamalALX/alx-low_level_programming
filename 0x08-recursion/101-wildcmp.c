#include "main.h"

/**
 * wildcmp - a function that compares two strings.
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return:returns 1 if the strings can be considered identical,
 * otherwise return 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	if (*s2 == *s1)
		return (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1));
	return (0);
}
