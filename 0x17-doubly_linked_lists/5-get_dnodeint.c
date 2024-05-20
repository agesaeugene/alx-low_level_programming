#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_tlinked list
 * @head: list head pointer.
 * @index: the nth node starting from 0.
 *
 * Return: the nth node of the list, or NULL if doesnt exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}

	return (NULL);
}
