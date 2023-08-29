#include <stddef.h>
#include "lists.h"
/**
 * sum_listint - returns sum of all data
 * @head: pointer
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;/*add data of current to sum and move to next*/
	}
	return (sum);
}
