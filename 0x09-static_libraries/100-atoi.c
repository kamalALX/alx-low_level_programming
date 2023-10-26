#include<stdio.h>

/**
 * _atoi -  a function that convert a string to an integer.
 *
 * @s: input
 *
 * Return: 0 success
*/

int _atoi(char *s)
{
	int sign = 1;
	int sum = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = sign * -1;
		else if (s[i] >= '0' && s[i] <= '9')
			sum = (sum * 10) + (s[i] - '0');
		else if (sum > 0)
			break;
		i++;
	}
	return (sum * sign);
}
