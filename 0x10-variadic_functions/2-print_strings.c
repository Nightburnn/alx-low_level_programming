#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function to print strings
 * @separator: string to be printed in between the strings
 * @n: the number of strings to be passed to the function.
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list night;
	unsigned int a = 0;
	char *string;

	if (n > 0)
	{
		va_start(night, n);

		while (a < n)
		{
			string = va_arg(night, char *);
			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);

			if (a != n - 1 && separator != NULL)
				printf("%s", separator);

			a++;
		}

		va_end(night);
	}

	printf("\n");
}
