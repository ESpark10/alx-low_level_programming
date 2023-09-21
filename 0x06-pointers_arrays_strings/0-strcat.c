#include "main.h"

/**
 *_strcat - concatonates theimput to output
 * @c: The character to print
 *
 * Return: On success 0
 */

char *_strcat(char *dest, char *src)
{
	char *mydest = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = ('\0');

	return (mydest);


}
