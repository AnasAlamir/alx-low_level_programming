#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 *
 * @head: input
 */
void free_list(list_t *head)
{
	list_t *current , *next;
	if (head == NULL)
		return;
	current = head;
	while (current)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
