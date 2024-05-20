#include "lists.h"

/**
 * dlistint_len  - number of elements in linked listdlistint_t are counted
 * @n: dlistint_t list head
 *
 * Return: number of elements in dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
