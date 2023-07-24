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
	int j = *str;

	for (j = 0; str[j] != '\0'; j++)
	{

	}
	for (i = (j / 2); i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
