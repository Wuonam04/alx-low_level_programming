#include "main.h"
/**
*_isalpha -> checks for alphabetical letters
*@c: a character to be checked on
*Return: always returns 0
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
