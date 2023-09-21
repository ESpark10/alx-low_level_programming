#include "main.h"

/**
 * _strncpy - copies input
 * @dest: prints input
 *@src: sends input
 *@n: decreasing int
 * Return: On success 1.
 */


char *_strncpy(char *dest, char *src, int n)
{
	char *elijahdest = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = ('\0');
		dest++;
		n--;
	}

	return (elijahdest);
}
