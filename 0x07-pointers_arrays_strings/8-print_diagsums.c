#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a 
 * square matrix of integers.
 * @a: pointer
 * @size: integer
 *
 * Return: always 0
 */
void print_diagsums(int *a, int size)
{
	int i, n, s1 = 0, s2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		s1 = s1 + a[i];
	}
	for (n = size - 1; n <= (size * size) - size; n = n + size -1)
	{
		s2 = s2 + a[n];
	}
	printf("%d, %d\n", s1, s2);
}
