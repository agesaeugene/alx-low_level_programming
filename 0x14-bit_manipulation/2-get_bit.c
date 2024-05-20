#include "main.h"

/**
 * get_bit - outputs a given bit value at a given index
 * @n: number bit is to be fetched from
 * @index: bit's index
 *
 * Return: index value at bit or -1 for an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((n & (1 << index)) >> index);
}
