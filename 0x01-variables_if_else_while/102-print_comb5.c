#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers.
 * Return: 0 if positive, non-zero if otherwise
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			putchar ('0' + i / 10);
			putchar ('0' + i % 10);
			putchar (' ');
			putchar ('0' + j / 10);
			putchar ('0' + j % 10);
			if (i != 99 || j != 99)
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
