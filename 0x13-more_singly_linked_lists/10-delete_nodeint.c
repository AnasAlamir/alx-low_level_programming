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
	ind = *head;
	while (i < index && ind)
	{
		i++;
		ind = ind->next;
	}
	cur = ind;
	if (!ind)
		return (-1);
	ind = ind->next;
	free(cur);
	return (1);
}
