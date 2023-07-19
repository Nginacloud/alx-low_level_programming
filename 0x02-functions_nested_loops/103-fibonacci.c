#include <stdio.h>
#define I 4000000
/**
 * main - check code.
 * Return: 0 always
 */
int main(void)
{
	int i = I;
	unsigned long int fib[I];
	int n;
	unsigned long int sum = 0;

	fib[0] = 1;
	fib[1] = 2;
	printf("%lu, %lu", fib[0], fib[1]);
	for (n = 2; n < i; n++)
	{
		fib[n] = fib[n - 1] + fib[n - 2];
		if (fib[n] % 2 == 0 && fib[n] <= I)
		{
			sum =+ fib[n];
		}
		else if (fib[n] > I)
		{
			break;
		}
		printf(", %lu", fib[n]);
	}
	printf("\n");
	printf("%lu\n", sum);
	return (0);
}
