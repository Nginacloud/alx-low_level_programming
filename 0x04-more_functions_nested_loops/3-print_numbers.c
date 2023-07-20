#include "main.h"
/**
 * print_numbers - prints numbers 0 to 9.
 * Return: 0 always
 */
void print_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number + '0');
	}
	_putchar('\n');
}
