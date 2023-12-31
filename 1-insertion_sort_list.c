#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list using insertion sort
 *
 * @list: The doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	listint_t *temp, *sorted = NULL;

	while (current)
	{
		listint_t *next = current->next;

		if (sorted == NULL || sorted->n >= current->n)
		{
			current->next = sorted;
			sorted = current;
		}
		else
		{
			temp = sorted;
			while (temp->next != NULL && temp->next->n <= current->n)
			{
				temp = temp->next;
			}
			current->next = temp->next;
			temp->next = current;
			print_list(sorted);
		}
		current = next;
	}
	*list = sorted;
}
