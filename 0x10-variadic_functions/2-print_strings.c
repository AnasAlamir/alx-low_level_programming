#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator : input
 *
 * @n: input
 *
 * @...: ints to sum
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *x;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(arg, n);
	for (i = 0; i < n - 1; i++)
	{
		x = va_arg(arg, char*);
		if (x == NULL)
			x = "nil";
		if (separator != NULL)
			printf("%s%s", x, separator);
		else
			printf("%s", x);
	}
	x = va_arg(arg, char*);
	if (x == NULL)
		x = "nil";
	printf("%s\n", x);
	va_end(arg);
}
