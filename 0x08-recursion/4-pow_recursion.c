#include "main.h"
/**
 * _pow_recursion - value of x raised to the powwer of y is returned
 * @x: base number
 * @y: exponent number
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
