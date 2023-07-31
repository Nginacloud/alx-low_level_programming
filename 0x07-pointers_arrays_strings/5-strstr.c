#include <stdio.h>
#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: pointer
 * @needle: points to the substring in haystack
 *
 * Return: always success
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	for (*n = 0; *n != '\0' && *haystack == *; haystack++, n++)
	{

	}
	if (*n == '\0')
	{
		return (h);
	}
	return ('\0');
}
