#include "sort.h"

/**
 */
void quick_sort(int *array, size_t size)
{
	qs(array, array[0], array[size - 1]);
}
void qs(int *array, l, r)
{

}
int partition(int *array, l, r)
{
	int pivot = array[r];
	int i = l - 1, j, temp;

	for (j = l; j < pivot; j++)
	{
		if (array[j] < pivot)
		{
			i++;


		}
	}

}
