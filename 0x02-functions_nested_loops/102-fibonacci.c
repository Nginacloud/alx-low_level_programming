#include <stdio.h>
#define I 50
/**
 * main - check the code.
 * Return: 0 Always success
 */
int main(void)
{
	int i = I;
	unsigned long int fib[I];
	int n;

	fib[0] = 1;
	fib[1] = 2;
	printf("%lu, %lu", fib[0], fib[1]);
	for (n = 2; n < i; n++)
	{
		fib[n] = fib[n - 1] + fib[n - 2];
		printf(", %lu", fib[n]);
	}
	printf("\n");
	return (0);
}
