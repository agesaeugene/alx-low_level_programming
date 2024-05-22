#include "search_algos.h"

/**
  * _binary_search - binary search array is used to search for a value in a sorted array.
  * @array: Pointer to the first element of the array containing the value to search.
  * @left: The index of the [sub]array to search from the beginning.
  * @right: The [sub]array's ending index that will be searched.
  * @value: The value to search for.
  *
  * Return: If the array is NULL or the value is not there, -1  Alternatively, the value's index location.
  *
  * Description: After every modification, prints the [sub]array being searched.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
  * exponential_search - uses exponential search to look for a value in a sorted array of numbers.
  * @array: Pointer to the first element of the array to search.
  * @size: The number of items present in an array.
  * @value: The value to be search for.
  *
  * Return: If the array is NULL or the value is not there, -1  Alternatively, the value's index location.
  *
  * Description: prints a value each time a comparison is made within the array.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
