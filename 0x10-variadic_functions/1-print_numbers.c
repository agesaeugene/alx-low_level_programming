#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Prints number and a new line
 * @separator: string to be output before numbers
 * @n: integers passed to the function
 * @...: different numbers will be output
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	unsigned int indx;
	va_list list;

	va_start(list, n);
	for (indx = 0; indx < n; indx++)
	{
		num = va_arg(list, int);
		printf("%d", num);
		if (indx < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
