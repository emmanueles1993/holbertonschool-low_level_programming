#include "holberton.h"
/**
 *swap_int -is a fuction.
 *
 * @a: Always 0.
 * @b: Always 0.
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
