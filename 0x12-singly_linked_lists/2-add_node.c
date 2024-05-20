#include "lists.h"

/**
 * add_node - inserts an new line ath the start of list_t
 * @head: list pointer
 * @str: string to be included
 * Return: new elemnts address or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int a = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[a] != '\0')
		a++;

	new_node->str = strdup(str);
	new_node->len = a;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
