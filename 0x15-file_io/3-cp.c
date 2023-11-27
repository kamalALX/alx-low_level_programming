#include "main.h"

/**
 * create_buffer - a function that creates a buffer.
 * @file: the name of the buffer to create.
 *
 * Return: a pointer to the buffer.
*/

char *create_buffer(char *file)
{
	char *buffer = NULL;

	buffer = malloc(1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_o - a function that colses an opned file.
 * @fd: file descriptor.
*/

void close_o(int fd)
{
	int fid = close(fd);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fid);
		exit(100);
	}
}

/**
 * main - a program that copies the content of a file to another file.
 * @argc: number of arguments passed to the program.
 * @argv: the arguments.
 *
 * Return: 0 on success.
*/

int main(int argc, char *argv[])
{
	int o1, o2, w, r;
	char *f1 = argv[1], *f2 = argv[2], *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", f1, f2);
		exit(97);
	}
	if (f1 == NULL)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", f1);
		exit(98);
	}
	buffer = create_buffer(argv[2]);
	o1 = open(argv[1], O_RDONLY);
	r = read(o1, buffer, 1024);
	o2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	do {
		if (o1 == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Can't read from file %s\n", f1);
			free(buffer);
			exit(98);
		}
		w = write(o2, buffer, r);
		if (o2 == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "can'twrite to %s\n", f2);
			free(buffer);
			exit(99);
		}
		r = read(o1, buffer, 1024);
		o2 = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close_o(o1);
	close_o(o2);
	return (0);
}
