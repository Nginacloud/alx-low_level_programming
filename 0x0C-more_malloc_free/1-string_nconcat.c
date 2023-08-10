#include "main.h"
#include <stdlib.h>
/**
 * _strlen - calculates length of string
 * @s: string
 *
 * Return: 0
 */
unsigned int _strlen(char *s)
{
	unsigned int len;

	for (len = 0; s[len] != '\0'; len++)
	{

	}
	return (len);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: first pointer
 * @s2: second pointer
 * @n: size in bytes
 *
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int len2 = _strlen(s2);
	unsigned int len1 = _strlen(s1);
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= len2)
	{
		n = len2;
	}
	c = malloc(len1 + n + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		c[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		c[len1 + i] = s2[i];
	}
	c[len1 + n] = '\0';
	return (c);
}
