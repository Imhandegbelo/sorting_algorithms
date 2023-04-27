#include "sort.h"

/**
 * swap - swaps two array elements
 * @xp: pointer to first element
 * @yp: pointer to second element
 */

void swap(int *xp, int *yp)
{
	int temp;

	temp = *xp;
	*xp = *yp;
	*yp = temp;
}


/**
 * bubble_sort - Sorts array of integers in ascending order
 * @array: the array to be sorted
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, swapped;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; j++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;
	}
}
