#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, c, j;
	char *s, x;
	a = s;

	for (; s[c] != '\0'; c++)
	{

	}
	for (j = 1; j < c; j++)
	{
		a++;
	}
	for (i = 0; i < (c / 2); i++)
	{
		x = s[c];
		s[c] = *a;
		*a = x;
		a--;
	}
}
