#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *i, *j;
	size_t count = 0;

	i = head;
	j = head;
	if (head == NULL)
	{
		exit(98);
	}
	while (i && j && j->next)
	{
		i = i->next;
		j = j->next->next;
		printf("[%p] %d\n", (void *)i, i->n);
		count++;
		if (i == j)
		{
			printf("-> [%p] %d\n", (void *i, i->n);
			break;
		}
	}
	return (count);
}
