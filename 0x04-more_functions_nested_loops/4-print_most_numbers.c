#include "main.h"

/**
 * print_most_numbers - print the input result
 *
 * Return: On success 0.
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
			continue;
		x++;
	_putchar(x + 0);
	}
	_putchar('\n');
}
