#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer
 * @src: string being appended
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0;
	int i;

	for (; dest[dlen]; dlen++)
	{

	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
