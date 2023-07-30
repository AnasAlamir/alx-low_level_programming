#include "variadic_functions.h"
#include <string.h>

/**
 * print_c - print char
 *
 * @a: input
 */
void print_c(char a)
{
	printf("%c", a);
}
/**
 * print_i - print int
 *
 * @a: input
 */
void print_i(int a)
{
	printf("%d", a);
}
/**
 * print_f - print float
 *
 * @:input
 */
void print_f(float a)
{
        printf("%f", a);
}
/**
 * print_s - print string
 *
 * @a: input
 */
void print_s(char *a)
{
	printf("%s", a);
}
/**
 * print_all - a function that prints anything.
 *
 * @format:  is a list of types
 *
 * @...: more inputs
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0, n = strlen(format);
	char *x;

	va_start(arg, n);
	while (i < n - 1 && format[i])
	{
		switch (format[i])
		{
			case 'c':
			{
				print_c(va_arg(arg, char));
        			break;
			}
			case 'i':
			{
				print_i(va_arg(arg, int));
				break;
			}
			case 'f':
			{
				print_f(va_arg(arg, float));
				break;
			}
			case 's':
			{
				x = va_arg(arg, char*);
				if (x == NULL)
					x = "nil";
				print_s(x);
				break;
			}
			default:
				continue;
		}
		printf(", ");
		i++;
	}
	switch (format[i])
	{
		case 'c':
		{
				print_c(va_arg(arg, char));
				break;
		}
		case 'i':
		{
				print_i(va_arg(arg, int));
				break;
		}
		case 'f':
		{
				print_f(va_arg(arg, float));
				break;
		}
		case 's':
			{
				x = va_arg(arg, char*);
				if (x == NULL)
					x = "nil";
				print_s(x);
				break;
			}
	}
	printf("\n");
	va_end(arg);
}
