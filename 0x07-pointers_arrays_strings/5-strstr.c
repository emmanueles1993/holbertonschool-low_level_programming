#include "holberton.h"
/**
 * _strstr - check the code for Holberton School students.
 * @haystack: is the parameter.
 * @needle: is other parameter.
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *beginning = haystack;
		char *pattern = needle;

		while (*pattern == *haystack && *pattern != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			pattern++;
		}
		if (*pattern == '\0')
		{
			return (beginning);
		}
		haystack = beginning + 1;
	}
	return (0);
}
