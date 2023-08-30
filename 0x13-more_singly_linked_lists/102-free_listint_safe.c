#include <stdlib.h>
#include "lists.h"
/**
 *free_listint_safe - frees a list
 *@h: pointer
 *
 *Return: size of list freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *h;
	int count;

	if (h == NULL || *h == NULL)
		return (0);
	current = *h;

	while (current != NULL)
	{
		temp = current->next;
		current = temp;
		free(current);
		count++;
		if (current == *h)
		{
			*h = NULL;/*set head to NULL = freed*/
			break;
		}
	}
	return (count);
}
