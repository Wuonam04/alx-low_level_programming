#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies two numbers
* @argc: arg count
* @argv: arg value
*
* Return: 0
*/
int main(int argc, char *argv[])
{
int index, multiplication;
multiplication = 1;
if (argc < 3)
{
printf("Error\n");
return (1);
}
for (index = 1; inde < argc; index++)
{
multiplication = multiplication *atoi(argv[index]);
}
printf("%d\n", multiplication);
return (0);
}
