#include "main.h"

/**
 * _strlen - prints the length of a sting
 * @s: the char retuned
 *
 * Return: nothing
 */


int _strlen(char *s)
{
	int  length = 0;

	while (*s != '\0')

	{
		length++;
		s++;
	}

	return (length);

}
