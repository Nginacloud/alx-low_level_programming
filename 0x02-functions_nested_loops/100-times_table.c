#include "main.h"
/**
 * print_times_table - prints the n times table.
 * @n: character
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int mul;

	if (n < 15 || n > 0)
	{
		return;
	}
	for (int i = 0 i <= n i++)
	{
		for (int j = 0 j <= n j++;)
		{
			int mul = i * j;
			{
				if (j == 0)
				{
					_putchar('0' + mul);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + mul / 10);
					_putchar('0' + mul % 10);
				}
			}
			_putchar('\n');
		}
	}
}
