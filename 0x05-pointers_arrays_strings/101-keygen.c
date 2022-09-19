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
	srand((unsigned int)(time(NULL)));
	int i;
	char pass[12];


	for (i = 0; i < 12; i++)
	{
		pass[i] = 33 + rand() % 94;
	}
	pass[i] = '\0';
	printf("%s\n", pass);
}
