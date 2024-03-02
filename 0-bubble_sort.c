# include "sort.h"
/**
 *swap - swap integers in an array
 *@xp: first integer to swap
 *@yp: second integer to swap
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
/**
 *bubble_sort - function that sorts an array of integers
 *@array: array of int to sort
 *@size : size of the array
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j = size;
	bool bubble = false;

	if (array == NULL || size < 2)
		return;

	while (bubble == false)
	{
		bubble = true;
		for (i = 0; i < j - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array + i, array + i + 1);

				print_array(array, size);
				bubble = false;
			}
		}
		j--;
	}
}
