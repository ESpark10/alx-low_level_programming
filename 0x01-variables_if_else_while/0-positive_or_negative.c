#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* main - this prints the correct arguement met*/
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					if (n > 0)
						printf( "%d is positive\n", n);
					else if
						printf("%d is negative\n", n);
					return (0);
}
