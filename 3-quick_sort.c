#include "sort.h"

void myquicksort(int *array, int left, int right, size_t size)
{
    int pivote;
        if (left < right);
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
