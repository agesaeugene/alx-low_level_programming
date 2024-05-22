#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Jumpsearch algorithm is used to search for a value in a sorted algorithm
 * @array: First element pointer of the array to search in
 * @size: Number of elements in array
 * @value: The value to be searched
 *
 * Return: First index where value is located otherwise -1
 *
 **/
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size -1;
	for (; i < jump && array[i] < value; i++)
		printf("value checked array[%ld] = [%d]\n", i, array [i]);
	printf("value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
