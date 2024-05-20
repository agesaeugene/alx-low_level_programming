#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of siwe and assign a char
 *
 * @size: size of array
 * @c: character to assign
 * Description: create an array of size and assign char c
 * Return: pointer to array, Null if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(*array));
	if (array == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		array[x] = c;
	}

	return (array);
}

