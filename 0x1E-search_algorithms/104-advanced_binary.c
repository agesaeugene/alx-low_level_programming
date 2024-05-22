#include "search_algos.h"

/**
  * advanced_binary_recursive - uses binary search to look for a value recursively in a sort array of integers.
  * @array: a reference to the [sub]array's first element that needs to be searched.
  * @left: The index of the [sub]array to search from the beginning.
  * @right: The [sub]array's ending index that will be searched.
  * @value: The value to be search for.
  *
  * Return: In the event that the value is absent, -1; otherwise, the value's index.
  *
  * Description: after every modification, prints the [sub]array being searched.
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
  * advanced_binary - uses advanced binary search to look for a value in a sorted array of numbers.
  * @array: a reference to the array's first element that needs to be searched.
  * @size: Number of elements in ana array
  * @value: The value to be searched for.
  *
  * Return: If the array is NULL or the value is not there, -1 If not, the value can be found at the first inde.
  *
  * Description: After every modification, prints the [sub]array being searched.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
