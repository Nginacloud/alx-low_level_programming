#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint - adds new node at the beginning
 *@head: double pointer
 *@n: value to initialize
 *
 * Return: address or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t)); /*allocate memory*/
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n; /*new node to given value*/
	new_node->next = *head;/*next pointer to current*/
	*head = new_node; /*head points to new node*/
	return (new_node);
}
