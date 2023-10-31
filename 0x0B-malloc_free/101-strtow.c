#:normal! ggVG=include "main.h"

/**
 * alloc_grid - splits a stirng into words
 *
 * @str: input
 *
 * Return: pointer to the array of splitted words
 */

char **strtow(char *str)
{
	int i, wc = 0;
	char **p;
	char *words;
	char *r = *p;

	if (str == NULL || str == (""))
		return (NULL);

	while (*str != '\0')
	{
		while (*str == ' ' || *str == '\t')
			str++;
		if (str != '\0')
		{
			wc++;
			while (*str != ' ' && *str != '\t' && *str != '\0')
				str++;
		}
		p = (char **) malloc(sizeof(char) * (wc + 1));
		if (words == NULL)
			return NULL;
		while (*str != '\0')
		{
			while (*str == ' ' || *str == '\t')
				str++;
			while (*str != ' ' && *str != '\t' && *str != '\0')
			{
				**p = *str;
				str++;
				p++;
			}
			words = (char *)malloc(sizeof(char) * (wc + 1));
			if (words == NULL)
				return NULL;
			_strncpy(words, p, str - p);
			words[str - p] = '\0';
			words[i] = words;
			i++;
		}
		return (r);
}
