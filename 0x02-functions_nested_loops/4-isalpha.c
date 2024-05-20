#include "main.h"
/**
 * _isalpha - return 1 when c is upper or lower
 *
 * Description: using the _putchar function
 *
 * @c: collects characters
 *
 * Return: 1 if c is low or cap otherwise 0
 */
int _isalpha(int c)
{
	char l, u;
	int letter = '0';

	for (l = 'a'; l <= 'z'; l++)
	{
		for (u = 'A'; u <= 'Z'; u++)
		{
		if (l == c || u == c)
		{
			letter = 1;
		}
		}
	}
	return (letter);
}
