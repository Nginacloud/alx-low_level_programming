#include "main.h"
/**
 * set_bit - sets value of a bit to 1
 * @n: [pointer
 * @index: index from 0
 *
 * Return: 1 if it works, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	mask = 1UL << index;

	*n |= mask;
	return (1);
}
