#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_cheched - allocates memory using malloc
 * @b: size of memory
 *
 * Return: exit (98) incase it fails, else pointer
 */
void *malloc_checked(unsigned int b);
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
