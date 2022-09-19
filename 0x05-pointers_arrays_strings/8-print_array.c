#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array from main
 * @a: a pointer given by the main function
 * @n: an int given by the main function
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
