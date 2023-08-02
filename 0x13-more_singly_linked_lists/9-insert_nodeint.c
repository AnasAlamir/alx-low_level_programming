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
	listint_t *ind, new = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (head == NULL || !head || new == NULL)
		return (NULL);
	ind = head;
	while (i < idx && ind)
	{
		ind = ind->next;
		i++;
	}
	if (!ind)
		retuen (NULL);
	new->next = ind->next;
	ind->next = new;
	new->n = n;
	return (new);
}
