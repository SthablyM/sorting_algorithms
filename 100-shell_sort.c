#include "sort.h"
/**
 *swap - swap two integers in an array
 *@xp: first integer to swap
 *@yp: second integer to swap
 *
 *Decription: uses Knuth Interval sequence
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
/**
 *shell_sort -  function that sorts an array of integers in ascending order
 *@array: array
 *@size: size of array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, k, j;

	if (array == NULL || size < 2)
		return;
	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;
	for (; gap >= 1; gap /= 3)
	{
		for (k = gap;  k < size; k++)
		{
			j = k;
			while (j >= gap && array[j - gap] > array[j])
			{
				swap(array + j, array + (j - gap));
				j -= gap;
			}
		}
		print_array(array, size);
	}
}
