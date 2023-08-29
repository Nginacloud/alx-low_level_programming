#include "lists.h"
/**
 * find_listint_loop - finds a loop in linked list
 * @head: pointer
 *
 * Return: success
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *i, *j;

	i = head;
	j = head;

	while (i && j && j->next)
	{
		i = i->next;
		j = j->next->next;
		if (j == i)
		{
			i = j;
			while (i != j)
			{
				i = i->next;
				j = j->next;
			}
			return (i);
		}
	}
	return (NULL);
}
