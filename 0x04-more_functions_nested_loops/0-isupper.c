#include "holberton.h"

/**
 * _isupper - check in mayuscula.
 *@c: print mayuscula.
 * Return: Always 0.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
