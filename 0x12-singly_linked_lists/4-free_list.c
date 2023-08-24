#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list
 * @head: pointer
 *
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *temp;

	for (current = head; current != NULL; current = temp)
	{
		temp = current->next;/*tore in temp*/
		free(current->str);
		free(current);
	}
}
