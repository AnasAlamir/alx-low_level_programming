#include "main.h"

/**
 * print_triangle - draws a triangle in the terminal.
 *
 * @size: input
 */
void print_triangle(int size)
{
	int c, d, e;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (c = 1; c <= size; c++)
		{
			for (d = size - c; d > 0; d--)
				_putchar(' ');
			for (e = 1; e <= c; e++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
