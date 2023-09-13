#include "main.h"

/**
 * _isalpha - check for lowercase and uppercaseletters
 *
 * @c: (char) The character to be checked.
 *
 * Return: 1 if the statement is true while 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	
		return (1);
		else 
		return (0);
	

	if (c >= 'A' && c <= 'Z')
	
		return (1);
	else
			return (0);
	
}
