#include "main.h"

/**
 * _strlen - length of a string
 * @s: a pointer given by the main function
 *
 * Return: length
 */

int _strlen(char *s)
{
	int p;

	int length = 0;

	for  (p = 0; s[p] != '\0',  p++)
	{
		length++;
	}
	return (length);
}
