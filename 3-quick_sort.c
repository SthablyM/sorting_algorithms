#include "sort.h"
void lomuto_partition(int *array, size_t size, int start, int end);
void lomuto_sort(int *array, size_t size, int start, int end);
void quick_sort(int *array, size_t size);
/**
 *swap - swap two integers in an array
 *@xp: first int to swap
 *@yp: second int to swap
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
/**
 *lomuto partition - order a subset of an aaray
 *@array: array of an int
 *@size: size of array
 *@start: the starting index
 *@end: end of an index
 *Return: the final index
 */
int lomuto_partition(int *array, size_t size, int start, int end)
{
	int *pivot, a, b;

	pivot = array + end;
	for (a = b = start; b < end; b++)
	{
		if (array[b] < *pivot)
		{
			if (a < b)
			{
				swap(array + b, array + a);
				print_array(array, size);
			}
			a++;
		}
	}
	if (array[a]  > *pivot)
	{
		swap(array + a, pivot);
		print_array(array, size);
	}
	return (a);
}
/**
 *lomuto_sort - implement the quicksort
 *@array: an array of  integer
 *@size: the size of the aaray
 *@start: starting index
 *@end: ending index
 *
 *
 */
void lomuto_sort(int *array, size_t size, int start, int end)
{
	int k;

	if (end - start > 0)
	{
		k = lomuto_partition(array, size, start, end);
		lomuto_sort(array, size, start, k - 1);
		lomuto_sort(array, size, k + 1, end);
	}
}
/**
 *quick_sort - function that sorts an array of integers
 *@array: an array of integer
 *@size: size of an array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	lomuto_sort(array, size, 0, size - 1);
}

