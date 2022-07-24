#include "main.h"
/**
* _strspn - search given byte of a string
* @s: source string
* @accept: accepted strin#g
* Return: number of byte in the segment
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int a = 0, b, t = 0;
while (accept[a])
{
	b = 0;
	while (s[b] != 32)
	{
		if (accept[a] == s[b])
		{
			t++;
		}
		b++;
	}

	a++;
}

return (t);
}
