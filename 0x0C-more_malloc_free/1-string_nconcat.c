#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - n bytes of a string are concatenated to another
 * @s1: 1st string to append to
 * @s2: 2nd string to concatenate from
 * @n: bytes from the second string to concatenate from the first string
 * Return: string's resulting pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int x, y, z;

	if (s1 == NULL)
		x = 0;
	else
	{
		for (x = 0; s1[x]; x++)
			;
	}
	if  (s2 == NULL)
		y = 0;
	else
	{
		for (y = 0; s2[y]; y++)
			;
	}
	if (y > n)
		y = n;
	s = malloc(sizeof(char) * (x + y + 1));
	if (s == NULL)
		return (NULL);
	for (z = 0; z < x; z++)
		s[z] = s1[z];
	for (z = 0; z < y; z++)
		s[z + x] = s2[z];
	s[x + y] = '\0';
	return (s);
}
