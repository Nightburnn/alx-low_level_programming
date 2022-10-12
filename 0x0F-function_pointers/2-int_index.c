#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 * @array: array to search from
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: int, else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;
		if (array && cmp)

		{
			for (n = 0; n < size; n++)
			{
				if (cmp(array[n]) != 0)

						return (n);
			}
		}
						return (-1);
}
