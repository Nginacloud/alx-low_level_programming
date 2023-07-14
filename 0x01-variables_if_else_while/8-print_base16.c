#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: 0 if positive, non-zero if otherwise.
 */
int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
	{
		if (n < 10)
		{
			putchar ('0' + n);
		}
		else
		{
			putchar ('a' + (n - 10));
		}
	}
	putchar ('\n');
	return (0);
}

