#include "sort.h"

/**
 * selection_sort - Sorts an array using selection sort algorithm
 *
 * @array: The array to sort
 * @size: The size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j = 0;
	int small;

	for (i = 0; i < size; i++)
	{
		small = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < small)
			{
				small = array[j];
				array[j] = array[i];
				array[i] = small;
				print_array(array, size);
			}
		}
	}
}
