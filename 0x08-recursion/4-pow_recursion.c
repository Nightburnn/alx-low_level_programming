#include "main.h"

/**
* _pow_recursion- returns the value of x to power of y
* @x: an int given by main
* @y: an int given by main
* Return: read first comment line plz
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
