#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints binary
 * @n: integer
 *
 */
void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;/*star from left*/
	int bit;
	int zeros;/*if inary start*/

	if (n == 0)
	{
		putchar('0');
		return;
	}
	while (shift >= 0)
	{
		bit = (n >> shift) & 1;
		if (bit == 1 || zeros == 1)
		{
			putchar(bit + '0');
			zeros = 1;
		}
		shift--;
	}
}
