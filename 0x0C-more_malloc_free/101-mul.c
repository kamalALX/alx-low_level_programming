#include "main.h"

/**
 * main - a program that multiplies two positive numbers.
 *
 * @argc: count of arguments.
 * @argv: arguments.
 *
 * Return: 0 (success).
*/

int main(int argc, char *argv[])
{
	unsigned int num1, num2, mul;
	int i;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		exit(98);
	}
	check_int(argc, argv);

	for (i = 1; i < argc; i++)
	{
		_atoi(argv[i]);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	mul = num1 * num2;
	printf("%u\n", mul);
	return (0);
}

/**
 * check_int - a function that checks if a string countains
 *		only integers.
 *
 * @argv: arguments to check.
 * @argc: count of arguments.
*/

void check_int(int argc, char *argv[])
{
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
}

/**
 * _atoi - a function that transform string of chars to intiger.
 *
 * @s: pointer to string.
 *
 * Return: returns the transfomed string int.
*/

unsigned int _atoi(char *s)
{
	unsigned int sum = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
			sum = (sum * 10) + (s[i] - '0');
		else if (sum > 0)
			break;
		i++;
	}
	return (sum);
}
