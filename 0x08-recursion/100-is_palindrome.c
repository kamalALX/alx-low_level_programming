#include "main.h"

/**
 * _strlen - function that Returns the length of a string.
 *
 * @s: The string.
 *
 * Return: return the length of the string.
 */

int _strlen(char *s)
{
	int length = 0;

	if (*(s + length))
	{
		length++;
		length = length + _strlen(s + length);
	}

	return (length);
}

/**
 * check_palindrome - a function that Checks if a string is a palindrome.
 *
 * @s: The string.
 * @length: The length of string.
 * @i: index of the string.
 *
 * Return: if the string is a palindrome return 1.
 *          else return 0.
 */

int check_palindrome(char *s, int length, int i)
{
	if (s[i] == s[length / 2])
		return (1);

	if (s[i] == s[length - i - 1])
		return (check_palindrome(s, length, i + 1));

	return (0);
}

/**
 * is_palindrome - returns 1 if the string is a palindrome.
 * @s: string
 *
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, length, i));
}
