#include "main.h"

/**
 *print_alphabet_x10 - print the in put
 *
 * no Return value
 */

void print_alphabet_x10(void)
{
	char x;
	int y;

	for (y = 1; y <= 10; y++)

	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
	_putchar('\n');
	}
}
