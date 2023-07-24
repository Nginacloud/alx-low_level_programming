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
	char *a, x;
	a = s;

	for (c = 0; s[c] != '\0'; c++)
	{

	}
	for (j = 1; j < c; j++)
	{
		a++;
	}
	for (i = 0; i < (c / 2); i++)
	{
		x = s[i];
		s[i] = *a;
		*a = x;
		a--;
	}
}
