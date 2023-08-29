#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index of a list
 * @head: pointer
 * @index: index of list
 *
 * Return: success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL)
		return (NULL);
	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	listint_t *current = *head;
	listint_t *prev = NULL;
	unsigned int i = 0;

	while (current != NULL)
	{
		if (i == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
		prev = current;
		current = current->next;
		i++;
	}
	return (-1);
}
