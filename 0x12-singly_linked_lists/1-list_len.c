#include "lists.h"


/**
 * list_len - gets number of elements present in a linked list_t
 * @h: linked list pointer to the start
 * Return: elements number present in the linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int a;

	tmp = h;
	for (a = 0; tmp; a++)
		tmp = tmp->next;
	return (a);
}
