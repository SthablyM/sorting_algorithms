#include "sort.h"
/**
 *swap - swap  two integers in an array
 *@x: first integer to  swap
 *@y: second integer to  swap
 *
 */
void swap(int *x, int *y)
{
	int temp;

	tmp = *x;
	*x = *y;
	*y = temp;
}
/**
 *selection_sort -  function that sorts an array of integers
 *@array: an array of integer
 *@size: the size of the array
 *
 */
void selection_sort(int *array, size_t size)
{
	int *min_index;
	size_t i, k;

	if (array == NULL || size  < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min_index = array + i;
		for (k = i + 1; k < size; k++)
			min_index = (array[k] < *min_index)
				? (array + k) : min_index;
		if ((array + i) != min_index)
		{
			swap(array + i, min_index);
			print_array(array, size);
		}
	}
}
