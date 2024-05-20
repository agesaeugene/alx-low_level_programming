#include "main.h"
/**
 * _abs - function to compute absolute value of an int
 * @r: the value
 * Description: A similar function is provided by the standard library
 *
 * Return: Always (0)
 *
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
