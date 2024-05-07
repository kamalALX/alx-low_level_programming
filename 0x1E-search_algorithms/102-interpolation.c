#include "search_algos.h"

/**
 * interpolation_search - a function that searches for a value in an array of integers
 *using the interpolation search algorithm
 *
 * @array: is a pointer to the first element of the array to search in.
 * @size:  is the number of elements in array.
 * @value: is the value to search for.
 *
 * Return: must return the first index where value is located
 *If value is not present or if array is NULL, your function must return -1
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t lo;
	size_t mid;
	size_t hi;

	if (array == NULL || size == 0)
		return (-1);

	lo = 0;
	mid = -1;
	hi = size - 1;

	while (array[mid] != value)
	{

		if (lo == hi || array[lo] == array[hi])
			return (-1);

		mid = lo + ((hi - lo) / (array[hi] - array[lo])) * (value - array[lo]);

		printf("Value checked array[%ld]", mid);

		if (mid >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[mid]);
		}

		if (array[mid] == value)
		{
			return (mid);
		}
		else
		{
			if (array[mid] < value)
			{
				lo = mid + 1;
			}
			else if (array[mid] > value)
			{
				hi = mid - 1;
			}
		}
	}
	return (-1);
}
