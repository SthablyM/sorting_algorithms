# include "sort.h"
/**
 *swap - swap integers in an array
 *@xp: first integer to swap
 *@yp: second integer to swap
 */
void swap(int *xp, int *yp)
{
	int temp;

	temp = *xp;
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
	size_t i, len = size;
	bool bubble = true;
	int temp;

	if (array == NULL || size < 2)
		return;

	while (bubble == true)
	{
		bubble = false;
		for (i = 1; i < len; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				print_array(array, size);
				bubble = true;
			}
		}
	}
}
