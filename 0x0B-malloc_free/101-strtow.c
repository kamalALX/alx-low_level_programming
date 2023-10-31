#include "main.h"

/**
 * strtow - splits a stirng into words
 * @str: string to be splitted
 *
 * Return: pointer to the array of splitted words
 */

char **strtow(char *str)
{
	char **p;
	int i, j = 0, tem = 0, sz = 0, words = word_count(str);

	if (words == 0)
		return (NULL);
	p = (char **) malloc(sizeof(char *) * (words + 1));
	if (p != NULL)
	{
		for (i = 0; i <= length(str) && words; i++)
		{
			if ((str[i] != ' ') && (str[i] != '\0'))
				sz++;
			else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
			{
				p[j] = (char *) malloc(sizeof(char) * sz + 1);
				if (p[j] != NULL)
				{
					while (tem < sz)
					{
						p[j][tem] = str[(i - sz) + tem];
						tem++;
					}
					p[j][tem] = '\0';
					sz = tem = 0;
					j++;
				}
				else
				{
					while (j-- >= 0)
						free(p[j]);
					free(p);
					return (NULL);
				}
			}
		}
		p[words] = NULL;
		return (p);
	}
	else
		return (NULL);
}


/**
 * word_count - counts the number of words in str
 * @str: string to be used
 *
 * Return: number of words
 */
int word_count(char *str)
{
	int i = 0, words = 0;

	while (i <= length(str))
	{
		if ((str[i] != ' ') && (str[i] != '\0'))
		{
			i++;
		}
		else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
		{
			words += 1;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (words);
}

/**
 * length - returns length of str
 * @str: string to be counted
 *
 * Return: length of the string
 */

int length(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);
}
