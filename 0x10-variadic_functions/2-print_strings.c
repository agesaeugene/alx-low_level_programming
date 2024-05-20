#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print string and a new line
 *
 * @separator: string to be printed between string
 *
 * @n: string count supplied to the function
 *
 * ...: Variable number of strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int indx;
	char *str;
	va_list list;

	va_start(list, n);

	for (indx = 0; indx < n; indx++)
	{
		str = va_arg(list, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (indx < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
