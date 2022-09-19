#include "main.h"

/**
 *rev_string - point a string in reverse
 *@s: a pointer given by the main function
 *Return: 0
 *
 */

void rev_string(char *s)
{
	int counter = 0;
	int i = 0;

	char swap;

	while (s[counter] != '\0')
		counter++;
	counter -= 1;

	while (counter > i)
	{
		swap = s[i];
		s[i] = s[counter];
		s[counter] = swap;
		counter--;
		i++;
	}
}
