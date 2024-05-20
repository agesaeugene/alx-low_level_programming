#include "lists.h"

/**
 * print_listint - outputs all elements of listint_t list
 * @h: pointer to the lists beginning
 *
 * Return: Number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		nodes++;
	}
	return (nodes);
}
