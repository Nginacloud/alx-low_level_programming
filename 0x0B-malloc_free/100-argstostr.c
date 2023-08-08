#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument vector
 *
 * Return: new string
 */
char *argstostr(int ac, char **av)
{
	int len;
	int i, j;
	int index = 0;
	char *c; /*concatenated string*/

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		len += ac;
	}
	c = malloc(sizeof(char) * (len + ac + 1));
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			c[index] = av[i][j];
			index++;
		}
		if (c[index] == '\0')
		{
			c[index++] = '\n';
		}
	}
	return (c);
}