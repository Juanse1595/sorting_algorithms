#include "sort.h"

/**
  * quick_sort - calls the qs function
  * @array: array to be sorted
  * @size: size of the array
  */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)	
		return;
	qs(array, 0, size - 1, size);
}

/**
  * qs - quick sort function
  * @array: array to be sorted
  * @left: left edge of the array
  * @right: right edge of the array
  */

void qs(int *array, int left, int right, size_t size)
{
	int pivot;
	if (left >= right)
	{
		return;
	}
	pivot = partition(array, left, right, size);
	qs(array, left, pivot - 1, size);
	qs(array, pivot + 1, right, size);
}

/**
  * partition - fix the position of the elements
  * @array: array to be sorted
  * @left: left edge of the array
  * @right: right edge of the array
  * Return: the index of the pivot
  */

int partition(int *array, int left, int right, size_t size)
{
	int pivot = array[right];
	int i = left - 1, j, temp;

	for (j = left; j < right; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
		}
		print_array(array, size);

	}
	temp = array[right];
	array[right] = array[i + 1];
	array[i + 1] = temp;
	return (i + 1);
}
