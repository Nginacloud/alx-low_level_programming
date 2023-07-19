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

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			mul = i * j;
			if (mul < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mul + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
