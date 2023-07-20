#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: times the character '_' is printed
 *
 * Return: 0 success
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
