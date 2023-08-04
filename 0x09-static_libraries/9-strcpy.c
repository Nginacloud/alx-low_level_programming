#include "main.h"
#include <string.h>
/**
 * _strcpy - copies a string
 * @dest: first pointer
 * @src: source value
 *
 * Return: always success
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
