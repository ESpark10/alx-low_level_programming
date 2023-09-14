#include "main.h"

/**
 * print_line - display n number of lines
 *
 * @n: the numbers to check
 *
 * Return: no return value
 */

void print_line(int n)
{
	int x;

	for (x = 1; x <= n; x++)
	{
		if (n <= 0)
			_putchar('\n');
		_putchar('_');
	}

	_putchar('\n');
}
