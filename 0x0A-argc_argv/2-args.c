#include <stdio.h>

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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
