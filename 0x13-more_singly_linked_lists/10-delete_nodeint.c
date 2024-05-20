#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - listint_t list node index is deleted
 * @head: list pointer
 * @index: nodes index should be deleted
 *
 * Return: 1 if successful, -1 if false
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int i;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}
	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
