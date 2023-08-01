#include "lists.h"

/**
 * listint_len -  that returns the number of elements in a linked listint_t list.
 *
 * @h: input
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t ie = 0;

	while (h != NULL)
	{
		ie++;
		h = h->next;
	}
	return (ie);
}
