#include "main.h"

/**
 * _strlen_recursion - returns the lengthn of a string
 * @s: a string given by main
 * Return: the string length
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
