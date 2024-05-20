#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the begginning of list listint_t
 * @head: new heads address pointer to the list
 * @n: integer added to the list
 *
 * Return: New elements address otherwise, NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
