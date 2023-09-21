#include "main.h"

/**
 * _strcmp -  compares input
 *
 *@s1:this is an input to be compared with s2
 *
 *@s2:this is an input to be ompared with s1
 *
 * Return: On success 1.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
