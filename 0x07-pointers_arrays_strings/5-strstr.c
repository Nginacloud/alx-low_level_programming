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
	char h[] = haystack;
	char n[] = needle;

	for (needle = 0; needle != '\0' && haystack == needle; haystack++, needle++)
	{

	}
	if (n[] == '\0')
	{
		return (haystack);
	}
	return ('\0');
}
