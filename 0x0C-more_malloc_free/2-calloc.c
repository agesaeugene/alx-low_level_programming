#include "main.h"
#include <stdlib.h>
/**
 * _calloc - memory allocated for an array with elements with a bitesize of one
 * @nmemb: number of elements
 * @size: size of eacha array elemants in bytes
 * Return: Allocated memry to a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);
	for (x = 0; x < (nmemb * size); x++)
		c[x] = 0;
	return (c);
}
