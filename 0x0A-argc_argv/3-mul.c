#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: a program that prints the number of arguments passed into it.
 *
 * @argc: The count of the arguments supplied to the program
 * @argv: 'array of pointers to char'.
 *
 * Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int i, j,  res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		res = i * j;
		printf("%i\n", res);
	}
	return (0);
}
