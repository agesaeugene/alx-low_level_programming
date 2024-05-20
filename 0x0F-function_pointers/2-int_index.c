#include "function_pointers.h"

/**
 * int_index - index of the stored array
 * @array: container to store elements
 * @size: Number of elements in array
 * @cmp: pointer to function to compare values
 *
 * Return: (-1)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}
	return (-1);
}
