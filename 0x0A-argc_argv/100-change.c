#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * Description:  a program that prints the minimum number
 *		of coins to make change for an amount of money.
 *
 * @argc: count of arguments.
 * @argv: array of pointers to char.
 *
 * Return: 0 (success)
 *	if number of arguments is not exactly 1. return 1.
 */

int main(int argc, char *argv[])
{
	int a, f, i = 0, b = 0;
	int arr[5] = {25, 10, 5, 2, 1};

	f = atoi(argv[argc - 1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	while (arr[i] != '\0')
	{
		if (f >= arr[i])
		{
			a = f / arr[i];
			b += a;
			if (f % arr[i] == 0)
				break;
			if (f % arr[i] != 0)
			{
				f = f - (arr[i] * a);
			}
		}
		i++;
	}
	printf("%i\n", b);
	return (0);
}
