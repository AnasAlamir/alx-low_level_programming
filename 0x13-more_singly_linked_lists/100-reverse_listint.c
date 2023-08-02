#include "lists.h"

/**
 * *reverse_listint - reverses a listint_t linked list.
 *
 * @head: input
 *
 * Return: nth node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur, *rev;

	if (head == NULL || !*head)
		return (NULL);
	cur = *head;
	rev = *head;
	*head = NULL;
	while (cur && rev)
	{
		rev->next = rev;
		rev = cur;
		cur = cur->next;
	}
	return (rev);
}
