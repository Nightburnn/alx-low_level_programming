#include "main.h"

/**
 * malloc_checked - function that allocates memory
 * @b: number of memory to be allocated
 * Return: Void
 */

void *malloc_checked(unsigned int b)
{
	void *night;/*void pointer*/

	night = malloc(b);/*allocates memory of b*/

	if (night == NULL)/* if night is null terminates with exit*/
	{
		exit(98);/* exit function terminates the call immediately*/
	}
	return (night);/* return pointer if malloc is sucessful*/
}
