#include <stdio.h>

/**
*main - this prints input
*Return: 0 success
*/

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
{
		if (x == 'e')
	{
		continue;
		x++;
	}
		if (x == 'q')
	{
		continue;
		x++;
	}
putchar(x);

}
putchar('\n');

		return (0);
}
