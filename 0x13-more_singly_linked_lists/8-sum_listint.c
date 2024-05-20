#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - outputs the sum of all the data (n) of inked list listint_t
 *
 * @head: pointer to the list
 *
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
