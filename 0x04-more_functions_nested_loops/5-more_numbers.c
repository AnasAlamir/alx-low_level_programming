#include "main.h"

/**
 * more_numbers -  prints the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int c, n = 0;

	while (n <= 10)
	{
		c = 0;
		while (c <= 14)
		{
			if (c > 9)
			{
			_putchar((c / 10) + 48);
			_putchar((c % 10) + 48);
			}
			else
			_putchar(c + 48);
			c++;
		}
		_putchar('\n');
		n++;
	}
}
