#include "main.h"
/**
 * _strlen_recursion - to get the string length
 * @s: string
 * Return: strings length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * compare_string - each character of a string is compared
 * @s: string
 * @l: minimal iterator
 * @r: maximum iterator
 * Return: int
 */
int compare_string(char *s, int l, int r)
{
	if (*(s + l) == *(s + r))
	{
		if (l == r || l == r + 1)
			return (1);
		return (0 + compare_string(s, l + 1, r - 1));
	}
	return (0);
}
/**
 * is_palindrome - tests for palindrimity of a string
 * @s: the string to be tested
 * Return: 1 for palindrome 0 for not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_recursion(s) - 1));
}
