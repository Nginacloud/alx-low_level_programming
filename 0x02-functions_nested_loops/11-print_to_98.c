#include "main.h"
/**
 *print_to_98 - description
 *@n: number given by user
 *
 *Return: function of no return
 */
void print_to_98(int n)
{
	int i;
	int curr;
	/*blank line*/
	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			if (i < 0)
			{
				curr = -i;
				_putchar('-');
			}
			else
				curr = i;
			if (curr >= 100)
				_putchar(curr / 100 % 10 + '0');
			if (curr >= 10)
				_putchar(curr / 10 % 10 + '0');
			_putchar(curr % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			if (i >= 100)
				_putchar(i / 100 % 10 + '0');
			if (i >= 10)
				_putchar(i / 10 % 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
