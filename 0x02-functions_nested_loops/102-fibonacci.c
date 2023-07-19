#include <stdio.h>
/**
 * main - check the code
 * Retur: Always success
 */
int main(void)
{
	int i = 50;
	int fib[i];
	fib[0] = 0;
	fib[1] = 1;
	printf("Fibonacci numbers: %d, %d"; fib[0], fib[1]);

	 for (int n = 2; n < i; n++)
	 {
		 fib[n] = fib[n - 1] + fib[n - 2];
		 printf(", %d", fib[n]);
	 }
	 printf("\n");
	 return (0);
}
