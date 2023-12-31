#include "sort.h"

/**
 * bubble_sort - Sorts an array using bubble sort algorithm
 *
 * @array: The array to sort
 * @size: The size of the array
 *
 * Return: Nothing. Just prints the array after each swap
 */

void bubble_sort(int *array, size_t size)
{
	int temp, swaps = 0;
	size_t i, j;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size; j++)
		{
			if (array[j - 1] > array[j])
			{
				temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;
				print_array(array, size);
				swaps++;
			}
		}
		if (swaps < 1)
			break;
	}
}
