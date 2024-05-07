#include "search_algos.h"
#include<math.h>

/**
 * jump_search - a function that searches for a value in an array of integers
 *using the Jump search algorithm
 *
 * @array: is a pointer to the first element of the array to search in.
 * @size:  is the number of elements in array.
 * @value: is the value to search for.
 *
 * Return: must return the first index where value is located
 *If value is not present or if array is NULL, your function must return -1
*/

int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, i;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	prev = 0;
	i = 0;

	while (prev < size)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);

		if (value <= array[step] || step >= size)
		{
			printf("Value found between indexes [%li] and [%li]\n", prev, step);

			while (i <= step && i < size)
			{
				printf("Value checked array[%lu] = [%i]\n", i, array[i]);
				if (array[i] == value)
				{
					return (i);
				}
				i++;
			}
		}

		prev = step;
		step += sqrt(size);
		i = prev;
	}

	return (-1);
}
