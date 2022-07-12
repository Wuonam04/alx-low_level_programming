#include "main.h"

/**
* print_rev - function to print a given string in reverse
*
* @s: pointer to a particular string to be printed in reverse
*
*/

void print_rev(char *s)
{

int i, n;

n = 0;

while (s[n] != '\0')
	n++;
for (i = n - 1; i >= 0; n--)
{
_putchar(s[i]);
}

_putchar('\n');

}
