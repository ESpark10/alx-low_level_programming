#include <stdio.h>
#include <stdlib.h>
/**
this is a comment
main - entry point
Return: 0 success
*/

int main()
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
