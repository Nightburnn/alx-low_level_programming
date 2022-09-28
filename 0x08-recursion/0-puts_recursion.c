#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string given by main
 * Return: none or 0
 */

void _puts_recursion(char *s)
{
	if (*s == 0)/*using pointer to get s value*/
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
