#include "main.h"

/**
 *_strspn - this function returns the length of the intial substring
 *@s: This is the main C string to be scanned
 *@accept: string containing the list of characters to match in s
 *return: ash
 */

unsigned int _strspn(char *s, char *accept)
{
	int night;
	int burn;
	int ash = 0; /*add three variable to int*/

	for (night = 0; s[night] != 0; night++)
	{
		if (ash != night)
			break;


		for (burn = 0; s[burn] != 0; burn++)
		{
			if (s[night] == accept[j])
			{
			ash++;
			break;
		}
	}
	}
	return (ash);
}
