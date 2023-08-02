#include "main.h"
#include <stdio.h>
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - natural squareroot of a number
 * @n: integer
 *
 * Return: natural squareroot of n or -1 otherwise
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - helper function
 * @n: integer
 * @i: integer
 *
 * Return: natural squareroot of n or -1 otherwise
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
