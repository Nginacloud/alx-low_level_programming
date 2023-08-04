#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: pointer
 * @src: string being appended
 * @n: character
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0;
	int i;

	for (; dest[dlen]; dlen++)
	{

	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
