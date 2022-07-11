#include "main.h"
/**
* _strlen - function that gives the length of a string
* @s: points to a particular string
*Return: length of the string
*/
int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
len++;
return (len);
}
