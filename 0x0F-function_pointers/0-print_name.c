#include "function_pointers.h"

/**
 * print_name -  a function that prints a name.
 *
 * @name: input
 *
 * @f: input func
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
