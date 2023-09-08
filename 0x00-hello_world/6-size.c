#include <stdio.h>

/**
 * main -  this will print the input on it
 * return: always should be 0.
 */

int main(void)
{	char a;
	int b;
	long int c;
	long long int d;
	float e;
	printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of in: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(e);
	return (0);
}
