#include "main.h"

/**
 * is_divisible - divisibility of a number is checked
 * @num: number to be verified
 * @div: divisor
 *
 * Return: number divisible 0 otherwise  1
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - checks wether number is prime
 * @n: number to be checked
 * Return: integer prime o otherwise 1
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (is_divisible(n, div));
}
