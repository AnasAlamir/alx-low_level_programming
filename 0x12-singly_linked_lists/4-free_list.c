#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 *
 * @head: input
 */
void free_list(list_t *head)
{
	list_t *current = head;
	if (head == NULL)
		return;
	while (current->next)
	{
		free(current);
		current = current->next;
	}
}
