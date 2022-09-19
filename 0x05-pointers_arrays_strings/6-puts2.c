#include "main.h"

/**
 * puts2 - prints every other char
 * @str: a pointer given by the main function
 * Return: 0
 */

void puts2(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		{
	if (counter % 2 == 0)

	_putchar(str[counter]);
	counter++;
	}
		_putchar(10);
}
}
