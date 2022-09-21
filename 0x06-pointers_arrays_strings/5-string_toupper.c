#include "main.h"

/**
 * string_toupper - change all lower case of a string to uppercase
 * @Night: pointer i gave myself
 * Return: Night
 */

char *string_toupper(char *Night)
{
	int i = 0;

	while (Night[i] != 0)
	{
		if (Night[i] >= 97 && Night[i] <= 122)
			Night[i] -= 32;
		i++;
	}
	return (Night);
}
