#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: input
 *
 * @n: input
 *
 * Return: the number of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *current = *head;

	if (new == NULL || !head)
		return (NULL);
	new->n = n;
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
