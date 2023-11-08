#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 *
 * @array: The Array containg elements.
 * @size: The size of the array
 * @cmp: a function that  compare values
 *
 * Return: returns -1 if no element match
 *	or the size of the array is less than zero
 *	Else return pointer to the first corresponding element.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) == 1)
			return (i);
	}
	return (-1);
}
