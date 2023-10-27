#include <stdio.h>
#define USE(var) ((void)(var))

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
	USE(argv);

	printf("%d\n", argc);
	return (0);
}
