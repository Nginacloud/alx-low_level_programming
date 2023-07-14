#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0 if positive, non-zero if otherwise
 */
int main(void)
{
	int n;
	
	for (n = 0; n < 10; n++)
	{
		putchar ('0' + n);
	}
	putchar ('\n');
	return (0);
}
