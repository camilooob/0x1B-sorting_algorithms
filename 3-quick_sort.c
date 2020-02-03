#include "sort.h"

int part(int *array, int left, int right, size_t size)
{
	int i = left , pivote = left, num_pivote = array[right], tmp;

	for (pivote = left; pivote <= right; pivote++)
	{
		if (array[pivote] < num_pivote)
		{
			if (array[i] != array[pivote])
			{
				tmp = array[i];
				array[i] = array[pivote];
				array[pivote] = tmp;
				print_array(array, size);
			}
			i++;
		}
	}
	tmp = array[i];
	array[i] = array[pivote];
	array[pivote] = tmp;
	print_array(array, size);


	return (i);
}


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
 * quick sort - quick sort algorthms
 * @size: size input
 * @array: pointer input
 * Return: No Return
 */
 void quick_sort(int *array, size_t size)
 {
     if (size < 2)
         {
             return;
         }
     myquicksort(array, 0, size - 1, size);
 }
