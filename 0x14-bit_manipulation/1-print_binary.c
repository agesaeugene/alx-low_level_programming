#include "main.h"

/**
 * print_binary - Outputs the binary conversion of a number
 * @n: number to be output in binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
