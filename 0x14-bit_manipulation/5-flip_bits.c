#include "main.h"

/**
 * flip_bits - returns number of bits to be fliped from one number to another
 * @n: number which bits to be fliped is gotten from
 * @m:number which bits are flipped to
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count = 0;

	for (i = 0; i < sizeof(n) * 8; i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			count++;
	}
	return (count);
}
