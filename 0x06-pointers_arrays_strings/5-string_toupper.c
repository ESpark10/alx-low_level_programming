#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 *
 *@str: sends input
 *
 * Return: On success 1.
 */

char *string_toupper(char *)
{
	char *eli = str;

	while (*eli != '\0')
	{
		if (*eli >= 'a' && *eli <= 'z')
		{
			*eli = *eli - ('a' - 'A');
		}
		eli++;
	}

	return (str);
}
