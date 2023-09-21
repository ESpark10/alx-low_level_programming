#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: prints input
 *@src: sends input
 *@n: increases
 * Return: On success 1.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *mydest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = ('\0');

	return (mydest);
}
