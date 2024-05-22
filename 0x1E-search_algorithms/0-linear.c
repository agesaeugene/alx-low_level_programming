#include "search_algos.h"

/**
 * linear_search - looks for a value in an array of integers using the linear search algorithm
 * @array: First element pointer of the array to search in
 * @size: Number of elements present in an array
 * @value: value to be searched
 *
 * Return: The value's initial index, if any; else, -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			break;
	}
	if (i == size)
		return (-1);
	return (i);
}
