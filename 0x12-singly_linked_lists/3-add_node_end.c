#include "lists.h"

/**
 * *add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: input
 *
 * @str: input
 *
 * Return: the number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *current = *head;

	if (new == NULL || !head)
		return (NULL);
	if (str == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = NULL;
	if (current != NULL)
	{
		while (current->next)
			current = current->next;
		current->next = new;
	}
	else
		*head = new;
	return (new);
}
