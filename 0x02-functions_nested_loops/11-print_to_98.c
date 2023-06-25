#include "main.h"

/**
 * print_to_98 -  function that prints all natural numbers from n to 98.
 *
 * @n: input
 *
 * Return: res
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i <= 9)
				_putchar('0' + i);
			else
			{
				_putchar('0' + (i / 10));
				_putchar('0' + (i % 10));
			}
			if (i == 98)
			{
				_putchar('\n');
				break;
			}
			_putchar(',');
			_putchar(' ');
		}
		}
	else
	{
		for (i = n; i >= 98; i--)
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			if (i == 98)
			{
				_putchar('\n');
				break;
			}
			 _putchar(',');
			_putchar(' ');
		}
	}
}
