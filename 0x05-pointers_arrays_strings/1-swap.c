#include "main.h"

/**
 * swap_int -  swaps the values of two integers.
 *
 * @a: input func
 *
 * @b: input func
 */
void swap_int(int *a, int *b)
{
	*b = *b + *a;
	*a = *b - *a;
	*b = *b - *a;
}
