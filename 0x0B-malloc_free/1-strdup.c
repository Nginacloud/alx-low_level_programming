#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to a newly allocated space in memory
 * @str: pointer
 *
 * Return: NULL if str is NULL else, pointer
 */
char *_strdup(char *str)
{
	char *c; /* duplicate */
	unsigned int len;	/*length */
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++)
	{

	}
	c = malloc(sizeof(char) * (len + 1));
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		c[i] = str[i];
	}
	c[i] = '\0';
	return (c);
}
