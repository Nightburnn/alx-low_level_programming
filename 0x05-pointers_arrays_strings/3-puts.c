#include "main.h"

/**
 * _puts - prints a string with a new line
 * @str: a pointer given by the main function
 * Return: 0
 */

void _puts(char *str)
{
	int i;

	while (str[i] != '\0')


{
	_putchar(str[i]);
	i++;
}

_putchar(10);

}
