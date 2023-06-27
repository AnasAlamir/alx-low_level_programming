#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 *
 * @a: input fun
 *
 * @n: input fun
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[n - 1]);
			break;
		}
		printf("%d, ", a[i]);
	}
	printf("\n");
}
