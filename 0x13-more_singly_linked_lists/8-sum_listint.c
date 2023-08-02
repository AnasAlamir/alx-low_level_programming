#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n)
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
		return (NULL);
	ind = head;
	while (ind)
	{
		sum += ind->n;
		ind = ind->next;
	}
	return (sum);
}
