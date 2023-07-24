#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string
 *
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_puts(*str);
	}
	_puts('\n');
}
