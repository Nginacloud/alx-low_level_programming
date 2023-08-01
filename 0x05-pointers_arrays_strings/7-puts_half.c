#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: pointer
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{

	}
	for (i = ((j - 1) / 2) + 1; i < j; i += 1)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
