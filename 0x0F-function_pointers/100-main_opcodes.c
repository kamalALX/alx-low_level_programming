#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function.
 *
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: 1 (success)
 *	else returns 2.
*/

int main(int argc, char *argv[])
{

	int i, byts;
	int (*adrs)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byts = atoi(argv[1]);

	if (byts < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i <  byts; i++)
	{
		opcode = *(unsigned char *)adrs;
		printf("%.2x", opcode);

		if (i == byts - 1)
			continue;
		printf(" ");
		adrs++;
	}
	printf("\n");
	return (0);
}
