#include "sort.h"

/**
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;
	listint_t *swapper = NULL, *swapper2 = NULL;

	if (list == NULL || *list == NULL)
	{
		return;
	}
	current = (*list)->next;
	while (current != NULL)
	{
		swapper = current->prev;
		swapper2 = current;
		current = current->next;
		while (swapper != NULL)
		{
			if (swapper->n > swapper2->n)
			{
				if (swapper->prev != NULL)
					swapper->prev->next = swapper2;
				else if (swapper->prev == NULL)
					*list = swapper;
				if (swapper2->next != NULL)
					swapper2->next->prev = swapper;
				swapper->next = swapper2->next;
				swapper2->prev = swapper->prev;
				swapper->prev = swapper2;
				swapper2->next = swapper;
				swapper = swapper2->prev;
				print_list(*list);
			}
			else
			{
				swapper2 = swapper;
				swapper = swapper->prev;
			}
		}
	}
}
