#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13.
 *
 * @o: input
 *
 * Return: address of pointer
*/

char *rot13(char *o)
{
	int i;
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rp = o;

	while (*o)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*o == rot13[i])
			{
				*o = ROT13[i];
				break;
			}
		}
		o++;
	}
	return (rp);
}
