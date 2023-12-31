#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list using insertion sort
 *
 * @list: The doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	listint_t *temp, *temp1, *sorted, *pot = NULL;

	if (current == NULL || current->next == NULL)
		return;

	while (current)
	{
		listint_t *next = current->next;

		if (sorted == NULL || sorted->n >= current->n)
		{
			current->next = sorted;
			current->prev = NULL;
			if (sorted != NULL)
				sorted->prev = current;
			sorted = current;
			current = next;
		}
		else
		{
			temp = sorted;
			while (temp->next != NULL && temp->next->n <= current->n)
			{
				temp = temp->next;
			}
			current->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = current;
			temp->next = current;
			current->prev = temp;

			pot = sorted;
			while(pot->next)
			{
				pot = pot->next;
			}
			temp1 = pot->next;
			pot->next = next;
			next->prev = temp1;

			print_list(sorted);

		}
		current = next;
	}
	*list = sorted;
}
