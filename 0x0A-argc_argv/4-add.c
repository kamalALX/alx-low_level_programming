#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: a program that adds positive numbers.
 *
 * @argc: The count of the arguments supplied to the program
 * @argv: 'array of pointers to char'.
 *
 * Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int i, j, res;

	if (argc < 2)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[i]);
	}
	printf("%i\n", res);
	return (0);
}
