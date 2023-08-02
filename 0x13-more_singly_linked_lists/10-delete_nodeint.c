#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 *
 * @head: input
 *
 * @index: input
 *
 * Return: nth node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ind, *cur;
	unsigned int i = 0;

	if (head == NULL || !*head)
		return (-1);
	if (!index)
	{
		ind = *head;
		*head = ind->next;
		free(ind);
		return (1);
	}
	ind = *head;
	while (i < index - 1 && ind)
	{
		i++;
		ind = ind->next;
	}
	if (!ind || !ind->next)
		return (-1);
	cur = ind->next;
	ind->next = cur->next;
	free(cur);
	return (1);
}
