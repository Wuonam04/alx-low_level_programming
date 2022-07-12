#include "main.h"
#include <stdio.h>
/**
* print_array - function that prints array of integers
* @a: array of integers
*@n: number of elements of the array to be printed
*
*/
void print_array(int *a, int n)
{
int p;

for (p = 0; p < n; p++)
{
printf("%d", a[p]);

if (p != (n - 1))
{
printf(", ");
}
}

printf("\n");
}
