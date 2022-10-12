#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes a function
 * @array: pointer to array
 * @size: size of the array
 * @action: pointer to the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n = 0;

	if (array && action)

		for (n = 0; n < size; n++)

			action(array[n]);
}

