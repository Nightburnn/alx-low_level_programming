#include "main.h"

/**
 * _puts - prints a string with a new line
 * @str: a pointer given by the main function
 * Return: 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0', i++)
{
	_putchar(str[i]);
}

_putchar('\n');

}
