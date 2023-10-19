#include "main.h"

/**
 * *leet - function that encodes a string into 1337.
 *
 * @o: input
 *
 * Return: address of pinter
 */

char *leet(char *o)
{
	int n[] = {4, 3, 0, 7, 1};
	char c[] = {'A', 'E', 'O', 'T', 'L'};
	char *rp = o;
	unsigned int i;

	while (*o)
	{
		for (i = 0; i < sizeof(c) / sizeof(char); i++)
		{
			if (*o == c[i] || *o == c[i] + 32)
			{
				*o = 48 + n[i];
			}
		}
		o++;
	}
	return (rp);
}
