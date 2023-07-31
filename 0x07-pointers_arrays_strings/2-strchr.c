#include <stdio.h>
#include "main.h"
/**
 * _strchr - locates character in a string
 * @s: pointer
 * @c: character to be found
 *
 * Return: first occurence or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if s[i] == c
		{
			return (s + i);
		}
	}
	return (NULL)
}
