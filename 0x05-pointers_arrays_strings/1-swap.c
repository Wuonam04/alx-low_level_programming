#include "main.h"

/**
* swap_int - interchange the valus being held by two intergers
* @a: parameter1
* @b: parameter2
*
 */
void swap_int(int *a, int *b)
{
int tmp;
tmp = *b;
*b = *a;
*a = tmp;
}
