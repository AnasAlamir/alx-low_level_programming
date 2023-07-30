#include "lists.h"

/**
 * list_len -  that returns the number of elements in a linked list_t list.
 *
 * @h: input
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t ie = 0;

	while (h != NULL)
	{
		ie++;
		h = h->next;
	}
	return (ie);
}
