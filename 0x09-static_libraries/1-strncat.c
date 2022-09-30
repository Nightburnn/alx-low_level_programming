#include "main.h"



/**

 * _strncat - can concatenate two string

 * @dest: first string

 * @src: second string

 * @n: counter

 * Return: dest

 */



char *_strncat(char *dest, char *src, int n)

{

	int a = 0, j = 0;



	while (dest[a] != '\0')



		a++;

	while (src[j] != '\0' && n > j)

	{

		dest[a] = src[j];



		a++;

		j++;

	}

	if (n > 0)

	{

		dest[a] = '\0';

	}

	return (dest);

}
