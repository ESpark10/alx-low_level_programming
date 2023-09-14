#include "main.h"

/**
 * more_numbers - display numbers from 0 to 14 in 10 times
 *
 * Return: no return value
 */

void more_numbers(void)
{
	int x, y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
				_putchar('1');
			if (y <= 13 || y == 14)
				_putchar(y % 10 + '0');
		}
		_putchar('\n');
	}
}
