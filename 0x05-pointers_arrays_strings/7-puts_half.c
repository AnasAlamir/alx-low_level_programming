#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: input fun
 */
void puts_half(char *str)
{
	int n = 0, c = 0;

	while (str[n])
		n++;
	n++;
	c = n / 2;
	while (str[c])
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
