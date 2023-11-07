#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints the result of simple operations.
 *
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 (success).
*/

int main(int argc, char *argv[])
{
	int num1, num2, calc;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	s = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(s) == NULL || s[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*s == '/' && num2 == 0) || (*s == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	calc = get_op_func(s)(num1, num2);
	printf("%i\n", calc);
	return (0);
}
