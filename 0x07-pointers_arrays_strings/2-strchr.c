#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates character in a string
 * @s: pointer
 * @c: character to be found
 *
 * Return: always success
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
