#include "lists.h"

/**
 * listint_len - returns the size of linked listint_t lists elements
 *
 * @h: list pointer
 *
 * Return: number of elements in listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	return (count);
}
