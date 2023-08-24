#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning
 * @head: double pointer
 * @str: string to add
 *
 * Return: address of new element, else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));/*memory for new node*/
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);/*if strdup fails*/
		return (NULL);
	}
	new_node->len = strlen(str);/*calculate len*/
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
