#include "main.h"

/**
 * _isdigit - check for digits only
 *
 * @c: (char) The character to be checked.
 *
 * Return: 1 if the statement is true while 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
