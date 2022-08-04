#include "function_pointers.h"
#include <stdlib.h>
/**
* print_name - a function to print name
* @name: pointer to name to print
* @f: function to print name
*
* Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
