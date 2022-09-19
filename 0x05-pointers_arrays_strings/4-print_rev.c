#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: a pointer given by the main function
 * Return: 0
 *
 */

void print_rev(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')

		counter++;
	while (counter)
	{
		_putchar(s[counter - 1]);
		counter--;
	}
	_putchar(10);
}
