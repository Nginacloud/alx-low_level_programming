#include <stdio.h>

int PrimeFactor(int n)
{
	int l = 2;
	int f;

	for (f = 2; f * f <= n; f++)
	{
		if (n % f == 0)
		{
			n /= f;
			l = f;
		}
	}
	if (n > l)
	{
		l = n;
	}
	return l;
}
int main()
{
	long int num = 612852475143;
	int result = PrimeFactor(num);

	printf("largest prime factor of %ld is: %d\n", num, result);
	return (0);
}
