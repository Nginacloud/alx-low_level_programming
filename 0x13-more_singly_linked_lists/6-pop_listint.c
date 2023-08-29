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
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	temp = *head;

	*head = (*head)->next;
	free(temp);
	return (data);
}
