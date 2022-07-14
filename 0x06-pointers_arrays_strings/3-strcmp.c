#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* _strcmp - compare string
* @s1: string 1
* @s2: string 2
* Return: 0
*
*/
int _strcmp(char *s1, char *s2)
{
int i =  strcmp(s1, s2);
printf("The functtion returns = %d", i);
return (0);
}
