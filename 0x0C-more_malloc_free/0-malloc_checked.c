#include "main.h"

/**
 * malloc_checked - function that allocates memory
 * @b: number of memory to be allocated
 * Return: Void
 */

void *malloc_checked(unsigned int b)
{
	void *night;

	night = malloc(b);

	if (night == NULL)
	{
		exit(98);
	}
	return (night);
}
