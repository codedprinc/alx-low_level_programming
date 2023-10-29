#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: Counts no. of arguments
 * @argv: A array of pointers to strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc);
	return (0);
}
