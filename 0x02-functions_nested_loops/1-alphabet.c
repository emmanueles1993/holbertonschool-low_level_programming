#include "holberton.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char abcd;
for (abcd = 'a'; abcd <= 'z'; abcd++)
_putchar(abcd);
_putchar('\n');
}
