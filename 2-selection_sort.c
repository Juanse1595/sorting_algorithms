#include "sort.h"

/**
 * selection_sort - Searches for the smallest element and
 * swaps it with the first element in the list.
 * @array: array
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	unsigned long int idx, j, min;
	int temp = 0;

	if (array == NULL || size < 1)
	{
		return;
	}
	for (idx = 0; idx < size - 1; idx++)
	{
		min = idx;
		for (j = idx + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != idx)
		{
			temp = array[idx];
			array[idx] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
