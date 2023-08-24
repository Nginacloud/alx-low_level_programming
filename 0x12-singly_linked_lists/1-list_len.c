#include "lists.h"
#include <stdlib.h>
/**
 * list_len - returns number of elements
 * @h: pointer
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next, count++)
	{

	}
	return (count);
}
