#include "sort.h"

/**
 * bubble_sort - reviews each element, compares them and exchanges them
 * @array: array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t idx, j, aux = 0;
	int flag = 0;

	if (array == NULL || size < 1)
	{
		return;
	}
	for (idx = 0; idx < size - 1; idx++)
	{
		flag = 0;
		for (j = 0; j < size - 1 - idx; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}
