#include "holberton.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char abcd;
	char number;

	for (number = '0'; number <= '9' ; number++)
		for (abcd = 'a'; abcd <= 'z'; abcd++)
			_putchar(abcd);
	_putchar('\n');
}
