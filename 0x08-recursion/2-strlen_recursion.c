#include "main.h"
/**
 * _strlen_recursion - length of a string is returned
 * @s: string to be measured
 * Return: strings length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
