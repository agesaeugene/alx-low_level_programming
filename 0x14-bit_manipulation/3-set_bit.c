#include "main.h"

/**
 * set_bit - value of -1 is set at a given index
 * @n: bit which a number is to be set
 * @index: index of set bit
 *
 * Return: i for true, -1 for false
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
