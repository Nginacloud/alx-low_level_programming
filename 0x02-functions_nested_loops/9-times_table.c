#include "main.h"
/**
 * times_table -  prints the 9 times table.
 * Return: Always 0.
 */
void times_table(void)
{
	int i;
	int j;
	int mul;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mul = (i * j);
			if ( mul < 10)
			{
				_putchar('.');
				_putchar(' ');
				_putchar(' ');
				_putchar(mul + '0');
			}
			else
			{
				_putchar('.');
				_putchar(' ');
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
