#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: pointer
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int j = *str;

	for (j = 0; str[j] != 0; j++)
	{

	}
	for (i = (j / 2); str[i] != 0; i += 1)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
