#include "holberton.h"
/**
 * _isdigit - check digits of 0 to 9.
 *@c: c is the digit check
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
