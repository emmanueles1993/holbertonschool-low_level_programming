#include "holberton.h"
/**
 * print_rev- check the code for Holberton School students.
 *@s: is variable
 * Return: Always 0.
 */
void print_rev(char *s)
{
int a;
int b;
for (a = 0; s[a] != '\0'; a++)
{}
for (b = a - 1; b >= 0; b--)
{
_putchar(s[b]);
}
_putchar('\n');
}
