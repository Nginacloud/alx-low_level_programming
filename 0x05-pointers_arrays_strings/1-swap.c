#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first pointer
 * @b: second pionter
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int *a;
	int *b;
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
