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
	{
		if (n <= 15 && n >= 0)
		{
			_putchar(48);
			for (multi = 1; multi <= n; multi++)
			{
				prod = num * multi;
				_putchar(',');

				if (prod <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + 48);
				}
				else if (prod <= 99)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((prod / 10) + 48);
					_putchar((prod % 10) + 48);
				}

				else
				{
					_putchar(' ');

					_putchar((prod / 100) + 48);
					_putchar(((prod - 100) / 10) + 48);
					_putchar((prod % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
