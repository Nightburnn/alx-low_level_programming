#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate of
 *the string str. Memory for the new string is obtained with malloc
 *@str: a string given by main
 *Return: the pointer or NULL
 */

char *_strdup(char *str)
{
	char *ptr;
	int night = 0;

	if (str == NULL)
		return (NULL);
	while (str[night])
		night++;

	ptr = malloc(sizeof(char) * night + 1);
	if (ptr == NULL)
		return (NULL);
	night++;
	while (str[night])
	{
		ptr[night] = str[night];
		night++;
	}
	ptr[night] = str[night];

	return (ptr);
}
