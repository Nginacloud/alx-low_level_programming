#include <stdio.h>
#define I 50
/**
 * main - check the code
 * Retur: Always success
 */
int main(void)
{
	int i = I;
	int fib[I];
	int n;

	fib[0] = 1;
	fib[1] = 2;
	printf("Fibonacci numbers: %d, %d", fib[0], fib[1]);

	 for (n = 3; n < i; n++)
	 {
		 fib[n] = fib[n - 1] + fib[n - 2];
		 printf(", %d", fib[n]);
	 }
	 printf("\n");
	 return (0);
}
