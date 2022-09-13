#include "main.h"

/**
*print_alphabet - the alphabet, in lowercase, followed by a new line.
* Return: Always 0 (Success)
*
*/


void print_alphabet(void)

{
int n;
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
_putchar('\n');
}
}
