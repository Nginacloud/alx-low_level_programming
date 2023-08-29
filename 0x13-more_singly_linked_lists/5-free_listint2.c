#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - sets head to null
 * @head: pointer
 *
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	free_listint2(&((*head)->next));
	free(*head);
	*head = NULL;
}
/*	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}*/
