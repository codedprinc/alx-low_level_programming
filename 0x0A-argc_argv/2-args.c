#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that prints all arguments it receives.
 * @argc: Counts no. of command line arguments.
 * @argv: Array containing commandline - arguments.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;
	(void) argc;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
