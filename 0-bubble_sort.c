# include "sort.h"
/**
 *swap_int - swap integers in an array
 *@xp: first integer to swap
 *@yp: second integer to swap
 */
void swap_int(int *xp, int *yp)
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
	bool bubble = false;

	if (array == NULL || size < 2)
		return;

	while (bubble == false)
	{
		bubble = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array + i, array + i + 1);

				print_array(array, size);
				bubble = false;
			}
		}
		len--;
	}
}
