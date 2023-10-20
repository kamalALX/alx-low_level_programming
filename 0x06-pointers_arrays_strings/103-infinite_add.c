#include "main.h"

/**
 * *infinite_add - function that prints a buffer.
 *
 * @n1: input
 * @n2: input
 * @r: buffer
 * @size_r: size of buffer
 *
 * Return: If the result can not be stored in r the function must return
 *		else The function returns a pointer to the result
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int i = strlen(n1) - 1;
	int j = strlen(n2) - 1;
	int k = 0;
	int num1, num2, sum, start, end;
	char temp;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		num1 = (i >= 0) ? n1[i] - '0';
		num2 = (j >= 0) ? n2[j] - '0';
		sum = num1 + num2 + carry;
		carry = sum / 10;
		sum %= 10;
		if (k < size_r - 1)
		{
			r[k] = sum + '0';
			k++;
		}
		else
		{
			return (0);
		}
		i--;
		j--;
	}
	r[k] = '\0';
	start = 0;
	end = k - 1;
	while (start < end)
	{
		temp = r[start];
		r[start] = r[end];
		r[end] = temp;
		start++;
		end--;
	}
	return (r);
}
