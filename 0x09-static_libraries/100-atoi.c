#include "main.h"



/**

 * _atoi - convert a string to an integer

 * @s: the string to use

 * Return: integer

 */



int _atoi(char *s)

{

	int counter = 0;

	int i = 0;

	unsigned int result = 0;

	int sign = 0;



	while (s[counter] != '\0')

	{

		if (s[counter] == '-')

			sign++;

		if (s[counter] >= 48 && s[counter] <= 57)

		{

			i++;

			result = result * 10 + s[counter] - '0';

		}

		if (i > 0 && (s[counter] < 48 || s[counter] > 57))

			break;

		counter++;

	}

	if (i == 0)

		return (0);

	if (sign % 2 == 0)

		return (result);

	return (result * -1);

}
