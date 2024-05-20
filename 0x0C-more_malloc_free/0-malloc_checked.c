#include "main.h"

/**
 * malloc_checked - assigns memory using malloc
 * @b: memorysize to be allocated
 * Return: pointer to allocate memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
