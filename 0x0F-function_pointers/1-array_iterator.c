#include "function_pointers.h"

/**
 * array_iterator - executes given as a parameter on elements of array.
 *
 * @array: input
 *
 * @size: input
 *
 * @action: input func
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size > 0 && action && array)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
