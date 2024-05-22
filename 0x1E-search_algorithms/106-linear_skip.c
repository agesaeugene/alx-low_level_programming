#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_skip - uses linear skip to look for an algorithm in a sorted singly linked list of integers.
 * @list: a reference to the connected list's head for searching.
 * @value: The value to be searched for.
 *
 * Return: NULL is used if the value is absent or if the list's head is NULL. In the absence of that, a reference to the value's initial node.
 *
 * Description: prints a value each time a comparison is made within the list. using the list size's square root as the leap step.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	if (list == NULL)
		return (NULL);

	for (node = jump = list; jump->next != NULL && jump->n < value;)
	{
		node = jump;
		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
