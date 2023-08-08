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
	char *c; /*concatenated string*/

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (int j = 0; av[i][j]; j++)
		{
			len++;
		}
		len++;
	}
	c = malloc(len + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	int index = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			c[index] = av[i][j];
			index++;
		}
		c[index] = '\n';
		index++;
	}
	c[index] = '\0';
	return (c);
}

