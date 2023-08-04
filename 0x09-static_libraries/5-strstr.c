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
	for (; *haystack; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		for (; *haystack && *n && *haystack == *n; haystack++, n++)
		{

		}
		if (*n == '\0')
		{
			return (h);
		}
		haystack = h;
	}
	return (NULL);
}
