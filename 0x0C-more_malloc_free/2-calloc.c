#include "main.h"
#include <stdlib.h>

/**
 *firstfunction- function i created that assign 0 to all
 *@pointer: it will increase it's address position
 *@counter: the counter
 *Return: void
 */

void firstfunction(char *pointer, int counter)
{
	if (counter)
	{
		*pointer = 0;
		firstfunction(pointer + 1, counter - 1);
	}
}
/**
 *_calloc - function that allocates memory for an array, using malloc
 *@nmeb: number of element
 *@size: size of data type
 *Return: pinter or null if there is error
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;
	int counter;

	counter = nmemb * size;

	if (size <= 0 || nmemb <= 0)
		return (NULL);

	pointer = malloc(counter);

	if (pointer == NULL)
		return (NULL);

	firstfunction(pointer, counter);

	return (pointer);
}
