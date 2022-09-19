#include "main.h"

/**
 * _strlen - length of a string
 * @s: a pointer given by the main function
 *
 * Return: length
 */
int _strlen(char *s)
{
int i;

int length = 0;


for (i = 0; s[i] != '\0', i++)

{
length++;
}
return (length);
}
