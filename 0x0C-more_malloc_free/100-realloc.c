#include "main.h"

/**
 * _realloc - function that reallocates a memory block
 *		using malloc and free
 *
 * @ptr: pointer to the memory previously allocated with a call to malloc.
 * @old_size: size of ptr
 * @new_size: size of the newly allocated block of memory.
 *
 * Return: the pointer to the newly allocated block of memory.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	intptr = (int *)ptr;
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	p = malloc(new_size);

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			p[i] = ptr[i];
		}
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			p[i] = ptr[i];
		}
	}
	free(ptr);
	return (p);
}
