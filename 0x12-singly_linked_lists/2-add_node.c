#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: input
 *
 * @str: input
 *
 * Return: the number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
