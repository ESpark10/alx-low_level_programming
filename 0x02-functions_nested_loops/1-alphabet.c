#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */



void print_alphabet(void)
{
	int x;
		for (x = 'a'; x <= 'z'; x++)
			{
			_putchar(x);
			}
}

	int main(void)
{
	
	print_alphabet();
	_putchar('\n')
	return (0);

}
