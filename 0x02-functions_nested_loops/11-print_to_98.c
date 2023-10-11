#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98
 *
 * @n:function input
*/

void print_to_98(int n)
{
	int j;

	if (n > 98)
		for (j = n; j > 98; j--)
			printf("%d, ", j);
	else
		for (j = n; j < 98; j++)
			printf("%d, ", j);
	printf("98\n");
}
