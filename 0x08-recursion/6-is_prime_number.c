#include "main.h"
/**
 * prime_number - helper function
 * @n: number
 * @i: test number
 *
 * Return: 1 if prime, 0 if not
 */
int prime_number(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime_number(n));
	i++;
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 *  otherwise return 0.
 *  @n: number
 *
 *  Return: 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (prime_number(n, 2));
}
