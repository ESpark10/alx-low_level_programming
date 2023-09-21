#include "main.h"

/**
*reverse_array- this reverses the input
 *@a: prints input
 *@n: sends input
 *
 * Return: On success 1.
 */

void reverse_array(int *a, int n)
{
	int x = 0;

	int y = n - 1;

	while (x < y)
	{
		int temp = a[x];

		a[x] = a[y];
		a[y] = temp;

		x++;
		y--;
	}
}
