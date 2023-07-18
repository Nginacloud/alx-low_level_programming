#include "main.h"
/**
 * print_last_digit - prints last digit of a number.
 * @i: character.
 *
 * Return: value of last digit.
 */
int print_last_digit(int i)
{
	int last = (i % 10);

	if (last < 0)
	{
		last *= -1;
	}
	_putchar(last + '0');
	return (last);
}
