#include "search_algos.h"

/**
 * advanced_binary - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t left;
	size_t right;
	size_t result;
	size_t i;

	left = 0;
	right = right - 1;
	result = -1;

	if (array == NULL || size == 0)
		return (-1);

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		printf("Searching in array");

		for (i = left; i <= right; i++)
		{
			printf("%s %d", (i == left) ? ":" : ",", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
		{
			result = mid;
			right = mid - 1;
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	return (result);
}
