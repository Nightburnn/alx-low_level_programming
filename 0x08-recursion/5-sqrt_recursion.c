#include "main.h"

/**
* f1- helper function that takes 2 parameters instead of 1
* @n: the number given from the sq rt function
* @i: the incremented part. the only part that changes
*Description: poop
* Return: Returns its i value to the sqrt recursion func
*/


int f1(int n, int i)
{
	if (n - (i * i) == 0)
		return (i);
	else if (i * i > n)
		return (-1);
	return (f1(n, i + 1));
}

/**
* _sqrt_recursion- returns only perfect square roots. no decimals
* @n: the number given from the sq rt function
*
* Description: poop
* Return: Returns its value to the main to print out
*/
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (f1(n, i));
}
