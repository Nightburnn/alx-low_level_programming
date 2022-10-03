#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: Null if not successful
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int night1 = 0, night2 = 0;
	char *ptr, *burn;

	ptr = s1;

	if (s1)
		while (*ptr++)
			night1++;
	else
		s1 = "";
	ptr = s2;
	if (s2)
		while (*ptr++)
			night2++;

	else
		s2 = "";
	burn = malloc(night1 + night2 + 1);
	if (!burn)
		return (NULL);
	ptr = burn;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = 0;

	return (burn);
}
