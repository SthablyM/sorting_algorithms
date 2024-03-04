#include "sort.h"
/**
 *swap - swap  two integers in an array
 *@xp: first integer to  swap
 *@yp: second integer to  swap
 *
 */
void swap(int *x, int *y)
{
	int temp = *x;
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
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_index = array + i;
		for (j = i + 1; j < size; j++)
			min_index = (array[j] < *min_index) ? (array + j)
				: min_index;
		if  ((array + 1) != min_index)
		{
			swap(array + i, min_index);
			print_array(array, size);
		}
	}
}
