#include <stddef.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node
 * @head: pointer
 * @index: value
 *
 * Return: success
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);/*node when it matches*/
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
