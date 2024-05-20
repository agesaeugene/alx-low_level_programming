#include "main.h"

/**
 * sqrt_check - looks for the square root of y
 * @x: sqrt guess
 * @y: number to get the srt of
 * Return: -x or sqrt of y
 * _sqrt_recursion - Natural square root of a number is returned
 */
int sqrt_check(int x, int y)
{
	if (x * x == y)
		return (x);

	if (x * x > y)
		return (-1);
			return (sqrt_check(x + 1, y));
}

/**
 * _sqrt_recursion - Natural square root of a number is returned
 * @n: integer whose squareoot is gotten
 *
 * Reurn: -1 or square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
