#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string being counted
 *
 * Return: always 0
 */
int _strlen(char *s)
{
	int len = 0;

	for (; *s != '/0'; s++)
	{
		len++;
	}
	return (len);
}
