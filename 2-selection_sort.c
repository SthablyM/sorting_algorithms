#include "sort.h"
/**
 *swap - swap  two integers in an array
 *@xp: first integer to  swap
 *@yp: second integer to  swap
 *
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
/**
 *selection_sort -  function that sorts an array of integers
 *@array: an array of integer
 *@size: the size of the array
 *
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;
		if  ((array + 1) != min)
		{
			swap(array + i, min);
			print_array(array, size);
		}
	}
}
