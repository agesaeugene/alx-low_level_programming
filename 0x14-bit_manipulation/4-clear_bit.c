#include "main.h"

/**
 * clear_bit - value of a bit is set to 0 at a given index
 * @n: number which the bit is to be sat
 * @index: bit index
 * Return: 1 if true, -1 if false
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
