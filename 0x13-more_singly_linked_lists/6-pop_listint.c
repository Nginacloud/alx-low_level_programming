#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes head node
 * @head: pointer
 *
 * Return: head nodes data
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return (0);
	int data = (*head)->n;
	listint_t *temp = *head;

	*head = (*head)->next;
	free(temp);
	return (data);
}
