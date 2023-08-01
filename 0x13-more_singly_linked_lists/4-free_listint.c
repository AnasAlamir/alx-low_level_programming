#include "lists.h"

/**
 * free_listint - a function that frees a list_t list.
 *
 * @head: input
 */
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	if (head == NULL)
		return;
	current = head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
