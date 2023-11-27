#include "main.h"

/**
 * append_text_to_file - a function that appends text
 *			at the end of a file.
 * @filename: the name of the file.
 * @text_content: the NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 *		If filename is NULL return -1.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, o, r, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
			length++;
		}
	}
	o = open(filename, O_RDWR | O_APPEND, 0660);
	r = write(o, text_content, length);

	if (o == -1 || r == -1)
		return (-1);

	close(o);
	return (1);
}
