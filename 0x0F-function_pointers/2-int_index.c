#include "function_pointers.h"

/**
 * int_index - this command searches for an integer
 * @array: this is the array to search in
 * @size: this is the size of the array
 * @cmp: this is the pointer to the comparing function
 * Return: this is the index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
