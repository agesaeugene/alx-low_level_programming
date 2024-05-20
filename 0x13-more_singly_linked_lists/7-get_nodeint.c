#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns nth node of listint_t linked list
 * @head: pointer tho the list
 * @index: nodes index starting from 0
 *
 * Return: the nth node of linked list listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

	return (current);
}
