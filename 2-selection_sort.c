#include "sort.h"
/**
 *swap - swap  two integers in an array
 *@x: first integer to  swap
 *@y: second integer to  swap
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
	size_t min_index;
	size_t i, j, k;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}
		if (min_index != i)
		{
			swap(&array[i], &array[min_index]);
			print_array(array, size);
			for (k = 0; k < size; k++)
			{
				print_array(array, size);
			}
			printf("\n");
			break;
		}
	}
}
