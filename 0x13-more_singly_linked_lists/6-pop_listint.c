#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - headnode of linked list listint_tis deleted
 * @head: pointer to the lists head address
 *
 * Return: The heads node data (n)
 */

int pop_listint(listint_t **head)
{
	int rt;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = (*head)->next;
	rt = (*head)->n;
	free(*head);
	*head = temp;

	return (rt);
}
