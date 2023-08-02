#include "lists.h"

/**
 * *get_nodeint_at_index - that returns the nth node
 *
 * @head: input
 *
 * @index: input
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ind;
	unsigned int i = 0;

	if (head == NULL)
		return (0);
	ind = head;
	while (i < index && ind)
	{
		ind = ind->next;
		i++;
	}
	return (ind);
}
