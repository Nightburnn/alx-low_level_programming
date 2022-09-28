#include "main.h"

/**
* _strlen - returns the length of a string
* @s: a string given by main
*
* Description: This will use recursion and no loops
*	to achieve a goal or mimic a function
* Return: it returns the string length
*/

int _strlen(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + _strlen(s + 1));
}


/**
* check_it - this will do all the work
* @s: the char string
* @i: the beignning of the string
* @j: the end of the string
*
* Description: this loops back if the two index values
* Return: this returns as a recursive function
*	or it returns 1 or 0 depending on the if statements
*/
int check_it(char *s, int i, int j)
{
	if (i >= j || s[i] == 0)
		return (1);
	if (*s != 0 && s[i] != s[j])
		return (0);
	return (check_it(s, i + 1, j - 1));
}


/**
* is_palindrome - calls on my helper function check_it
* @s: the char string
*
* Description: this will return 1 if the string is 0 or 1 in length
*	if it is longer we call on the helper function and use their return
* Return: either 1 or 0 dpeenind on if it is a palindrome
*/

int is_palindrome(char *s)
{
	int j = (_strlen(s));

	if (j == 0 || j == 1)
		return (1);
	return (check_it(s, 0, j - 1));
}
