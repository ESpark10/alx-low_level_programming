#include <stdio.h>
#include <stdlib.h>

/**
*main - this prints the input
*Return: 0 success
*/


int main()
{
	int basenum;
		for (int basenum = 0; basenum < 16; basenum++)
			{

				char hexabase = (basenum < 10) ? ('0' + basenum) : ('a' + basenum - 10);

				putchar(hexabase);

			}
		putchar('\n');
	return (0);
}
