#include "main.h"

/**
 * print_diagonal - draws a diagonal in the terminal.
 *
 * @n: input
 */
void print_diagonal(int n)
{
	int c, d;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (c = 0; c < n; c++)
		{
			for (d = 0; d < n; d++)
			{
				if (c == d)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
