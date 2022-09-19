#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/**
 *  main - makes something that cracks 101crackme
 *  Description: cracking the hacker code
 *  Return: returns 0 if no error
 */

int main(void)
{
	int ascii = 2772, i = 0, j, random;
	char password[100];
	time_t t;

	srand((int) time(&t));
	while (ascii > 126)
	{
		random = rand() % 126;
		password[i] = random;
		ascii -= random;
		i++;
	}
	if (ascii > 0)
		password[i] = ascii;
	else
	{
		i--;
	}

	for (j = 0; j <= i; j++)
	{
		printf("%c", password[j]);
	}
	return (0);
}
