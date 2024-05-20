#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Pnter to memry location allocated & contains string cpy as parmter
 *
 * @str: string to copy
 *
 * Return: if str == NULL - NULL
 *         Otherwise pointer to the duplicate string
 */
char *_strdup(char *str)
{
	char *c;
	int x, y = 0;

	if (str == NULL)
		return (NULL);
	for (x = 0; str[x]; x++)
		y++;
	c = malloc(sizeof(char) * (y + 1));
	if (c == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x]; x++)
	{
		c[x] = str[x];
		c[y] = '\0';
	}
	return (c);
}
