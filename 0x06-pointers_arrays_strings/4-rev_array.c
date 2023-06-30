#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: input fun
 *
 * @n: input fun
 */
void reverse_array(int *a, int n)
{
	int i, t, l;

	for (i = 0, l = (n - 1); i < l; i++, l--)
	{
		t = a[i];
		a[i] = a[l];
		a[l] = t;
	}


}
