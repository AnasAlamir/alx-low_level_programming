#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - to prints the alphabet in lowercase followed by a new line.
 */
void print_alphabet(void)
{
	char s1 = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(s1);
		s1++;
	}
	_putchar('\n');
}
