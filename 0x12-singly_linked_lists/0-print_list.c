#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list.
 *
 * @h: input
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t ie = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		printf("[%d] %s\n", h->len, h->str);
		ie++;
		h = h->next;
	}
	printf("-> %d elements", i);
	return (ie);
}
