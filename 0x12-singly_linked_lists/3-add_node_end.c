#include "lists.h"
/**
 * add_node_end - new node is added at the end of list_t list
 * @head: list pointer
 * @str: string to be included
 * Return: new elements address or null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	int a = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[a] != '\0')
		a++;

	new_node->str = strdup(str);
	new_node->len = a;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}

	return (new_node);
}
