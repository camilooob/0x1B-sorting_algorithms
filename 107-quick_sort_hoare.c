#include "sort.h"

/**
 * myswap - swaps two values
 *
 * @array: data sort input
 * @firts: first
 * @second: second
 * @size: size
 *
 * Return: No Return
 */
void myswapy(int *array, int i, int j)
{

	int tmp;

	tmp = array[i];
	array[i] = array[j];
	array[j] = tmp;
}

/**
 * part - part to a pivot
 *
 * @array: data sort input
 * @left: left
 * @right: right
 * @size: size input
 *
 * Return: New pivote
 */
int part(int *array, int left, int right, size_t size)
{
	int i, j, pivot  = array[right];

	for (i = left, j = right; 1 ; i++, j--)
	{
		while (array[i] < pivot)
		{
			i++;
		}
		while (array[j] > pivot)
		{
			j--;
		}
		if (i >= j)
		{
			return (i);
		}
	}
	myswapy(array, i, j);
	print_array(array, size);

	return (i);
}

/**
 * myquicksort -  quick sort algorithm
 *
 * @array: data to sort
 * @left: left pivote
 * @right: right pivote
 * @size: size input
 * Return: No Return
 */
void myquicksort(int *array, int left, int right, size_t size)
{
	int pivote;

	if (left < right)
	{
		pivote = part(array, left, right, size);
		myquicksort(array, left, pivote - 1, size);
		myquicksort(array, pivote + 1, right, size);
	}
}

/**
 * quick_sort_hhoare -  quick sort algorithm
 *
 * @array: sort data
 * @size: size input
 *
 * Return: No Return
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (size < 2 || !array )
		return;

	myquicksort(array, 0, size - 1, size);
}
