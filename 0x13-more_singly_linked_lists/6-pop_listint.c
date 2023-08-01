#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: input
 *
 * Return: head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *next;
	int n;

	if (head == NULL || !*head)
		return (0);
	n = (*head)->n;
	next = (*head)->next;
	free(*head);
	*head  = next;
	return (n);
}
