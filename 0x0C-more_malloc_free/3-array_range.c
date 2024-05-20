#include "main.h"
#include <stdio.h>
/**
 * array_range - an array of integers is created from min to max
 * @min: least value stored
 * @max: greatest value stored and number of elements
 * Return: new array pointer
 */

int *array_range(int min, int max)
{
	int *d;
	int a, z;

	if (min > max)
		return (NULL);
	z = max - min + 1;
	d = malloc(sizeof(int) * z);
	if (d == NULL)
		return (NULL);
	for (a = 0; a < z; a++, min++)
	{
		d[a] = min;
	}
	return (d);
}
