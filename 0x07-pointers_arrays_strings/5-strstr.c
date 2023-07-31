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

	for (; *n != '\0'; haystack++)
	{
		if (*haystack == *n)
		{
			n++;
		}
		else
		{
			n = needle;
		}
	}
	if (*n == '\0')
	{
		return (h);
	}
	return (NULL);
}
