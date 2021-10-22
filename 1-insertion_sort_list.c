#include "sort.h"

/**
 *
 */
void insertion_sort_list(listint_t **list)
{
	int temp;
	listint_t *current = NULL;
	listint_t *swapper = NULL;

	if (list == NULL || *list == NULL)
	{
		return;
	}
	current = (*list)->next;
	while (current != NULL)
	{
		swapper = current->prev;
		while (swapper != NULL)
		{
			if (swapper->n > (swapper->next)->n)
			{
				temp = (swapper->next)->n;
				(swapper->next)->n = swapper->n;
				swapper->n = temp;
				swapper = swapper->prev;
				print_list(*list);
			}
		}
		current = current->next;
	}
}
