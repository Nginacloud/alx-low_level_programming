#include "main.h"
#include <stdlib.h>
/**
 * _strlen - length of string
 * @s: pointer
 *
 * Return: success
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
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: secong string
 *
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = _strlen(s1);
	unsigned int len2 = _strlen(s2);
	unsigned int i, j;
	char *c; /*concatenated*/

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	c = malloc(sizeof(char) * (len1 + len2 + 1));
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		c[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		c[i + j] = s2[j];
	}
	c[i + j] = '\0';
	return (c);
}
