#include "main.h"

/**
 * puts_half - print the second half of a string
 * @str: string to use
 *
 */

void puts_half(char *str)
{
	int length, p, q;

	for (length = 0; str[length] != '\0';  length++)
	{
		n = (length - 1) / 2;
		for  (q = p + 1; str[q] != '\0';  q++)
		{
			_putchar(str[q]);
		}
		_putchar('\n');
	}
}

