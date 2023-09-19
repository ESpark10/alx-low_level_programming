#include "main.h"

/**
 *swap_int - set the integer a to b
 * @a: an interger to swap
 *@b: an integer to swap
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
