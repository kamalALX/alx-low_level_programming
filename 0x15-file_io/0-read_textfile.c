#include "main.h"

/**
 * read_textfile - a function that reads a text file
 *		and prints it to the POSIX standard output.
 * @letters: the number of letters it should read and print.
 * @filename: the file that we need to read.
 *
 * Return: the actual number of letters it could read and print.
 *		- if the file can not be opened or read, return 0
 *		- if filename is NULL return 0
 *		- if write fails or does not write the expected
 *		amount of bytes, return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(1, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);

	return (w);
}
