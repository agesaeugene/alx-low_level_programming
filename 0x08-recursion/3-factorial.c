#include "main.h"
/**
 * factorial - Factorial of a given number is returned
 * @n: factored number
 * Return: n's factorial
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	result *= factorial(n - 1);
	return (result);
}
