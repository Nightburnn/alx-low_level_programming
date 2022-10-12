#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
* main- does math. quick maffs.
* @argc: should only be 4.
* @argv: should be calc and other stuff
* Description: Yo this problem is dope
* Return: Returns the result to the command line.
*/

int main(int argc, char **argv)
{
	int a;
	int b;
	int calculated;

	if (argc != 4)
	{
		printf("Error\n");

		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (b == 0 && (*argv[2] == '/' || *argv[2] == '%'))

	{

		printf("Error\n");

		exit(100);

	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	calculated = get_op_func(argv[2])(a, b);
	printf("%d\n", calculated);
	return (0);
}
