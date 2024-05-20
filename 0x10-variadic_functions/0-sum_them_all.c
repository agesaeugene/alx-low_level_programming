#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum of all parameters is returned
 * @n: number of integers to sum
 * @x: Index for looping
 * @...: Integers to be summed
 *
 * Return: n == 0 - 0
 * Otherwise - sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int x, sum = 0;

	va_start(ap, n);

	for (x = 0; x < n; x++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

