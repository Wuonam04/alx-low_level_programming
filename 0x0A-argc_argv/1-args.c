#include <stdio.h>
/**
* main - prints number of args
* @args: argument counts
* @argv: argument value
*
* Return: nothing
*/
int main(int args, char *argv[])
{
printf("%d\n", args - 1);
(void) argv;
return (0);
}
