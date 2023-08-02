#include "lists.h"

/**
 * *insert_nodeint_at_index -  inserts a new node at a given position.
 *
 * @head: input
 *
 * @idx: input
 *
 * @n: int
 *
 * Return: nth node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ind, *new = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (head == NULL || new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!idx)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	ind = *head;
	while (ind)
	{
		if (i == idx - 1)
		{
			new->next = ind->next;
			ind->next = new;
			return (new);
		}
		i++;
		ind = ind->next;
	}
	free(new);
	return (NULL);
}
