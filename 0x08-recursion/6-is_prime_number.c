#include "main.h"

/**
* helper - returns only perfect square roots. no decimals
* @n: the number given from the function prime
* @i: an int passed by the function prime
*
* Description: poop
* Return: Returns its value to the main to print out
*/

int helper(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (helper(n, i + 1));
}

/**
* is_prime_number - checks if a prime number
* @n: the number given from the main
*
* Description: read the first comment
* Return: returns 1 if prime 0 if not
*/


int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	return (helper(n, i));
}
