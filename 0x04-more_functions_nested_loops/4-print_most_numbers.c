#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 0.
 */

void print_most_numbers(void)
{
	int x;
	for (x = 0; x <= 9; x++)
	{
		if (x == 2 || 4)
		continue;
		x++;
		_putchar(x);
	}
	_putchar('\n');
}
