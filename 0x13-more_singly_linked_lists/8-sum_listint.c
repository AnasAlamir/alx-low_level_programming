#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n) of a listint_t linked list.
 *
 * @head: input
 *
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	listint_t *ind;
	int sum = 0;

	if (head == NULL)
		return (0);
	ind = head;
	while (ind)
	{
		sum += ind->n;
		ind = ind->next;
	}
	return (sum);
}
