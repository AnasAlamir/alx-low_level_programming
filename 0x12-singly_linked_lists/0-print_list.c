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
		else
			printf("[%ld] %s\n", strlen(h->str), h->str);
		ie++;
		h = h->next;
	}
	return (ie);
}
