#include "main.h"

/**
 * reverse_array - Reverse a string
 * @a: a string given by the main
 * @n: a string given by the main
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int Night;
	int i = 0;
	int end = n - 1;

	while (i < n / 2)
	{
		Night = a[i];
		a[i] = a[end];
		a[end] = Night;
		i++;
		end--;
	}
}
