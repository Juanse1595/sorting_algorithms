#include "sort.h"

/**
  * quick_sort - calls the qs function
  * @array: array to be sorted
  * @size: size of the array
  */

void quick_sort(int *array, size_t size)
{
	qs(array, array[0], array[size - 1]);
}

/**
  * qs - quick sort function
  * @array: array to be sorted
  * @left: left edge of the array
  * @right: right edge of the array
  */

void qs(int *array, left, right)
{

}

/**
  * partition - fix the position of the elements
  * @array: array to be sorted
  * @left: left edge of the array
  * @right: right edge of the array
  * Return: the index of the pivot
  */

int partition(int *array, left, right)
{
	int pivot = array[right];
	int i = left - 1, j, temp;

	for (j = left; j < pivot; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
		}
	}
	temp = array[right];
	array[right] = array[i + 1];
	array[i + 1] = temp;
	return (i + 1);
}
