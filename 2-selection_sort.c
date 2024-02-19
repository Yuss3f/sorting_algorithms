#include "sort.h"
/**
 *selection_sort - a function that sort using selection sort algorithm
 *
 * @array: array to sort
 * @size: the size of the array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k;
	int temp;

	if (!array || !size)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = size - 1, k = i + 1; j > i; j--)
		{
			if (array[j] < array[k])
			{
				k = j;
			}
		}
		if (array[i] > array[k])
		{
			temp = array[i];
			array[i] = array[k];
			array[k] = temp;
			print_array(array, size);
		}
	}
}
