#include "main.h"
/**
 * get_bit - returns value if bit at index
 * @n: number to extract
 * @index: position moved
 *
 * Return: value at bit index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	 mask = 1UL << index;

	return ((n & mask) ? 1 : 0);
}
