#include "main.h"

/**
 * times_table -  a function that prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j, pro;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			pro = i * j;
			if (pro > 9)
			{
				_putchar((pro / 10) + '0');
				_putchar((pro % 10) + '0');
			}
			else
				_putchar((pro) + '0');
			if (j == 9)
			{
				_putchar(' ');
				break;
			}
			if (pro >= 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
