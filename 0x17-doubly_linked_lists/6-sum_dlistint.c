#include "lists.h"
/**
 * sum_dlistint - returs the sum of all data (n) of linked list dlistint_t
 * @head: list head pointer
 *
 * Return: sum of all the data (n) of the list, or 0 list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
