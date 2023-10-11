#include "main.h"

/**
 * print_times_table- prints the 9 times table, starting with 0
 *
 * @n: input
*/

void print_times_table(int n)
{
	int num, multi, prod;

	for (num = 0; num <= n; num++)
		if (n < 15 && n > 0)
		{
			putchar(48);
			for (multi = 1; multi <= n; multi++)
			{
				prod = num * multi;
				putchar(',');
				if (prod <= 9)
				{
					putchar(' ');
					putchar(' ');
					putchar(' ');
					putchar(prod + 48);
				}
				else if (prod <= 99)
				{
					putchar(' ');
					putchar(' ');
					putchar((prod / 10) + 48);
					putchar((prod % 10) + 48);
				}
				else
				{
					putchar(' ');
					putchar((prod / 100) + 48);
					putchar(((prod - 100) / 10) + 48);
					putchar((prod % 10) + 48);
				}
			}
			putchar('\n');
		}
}
