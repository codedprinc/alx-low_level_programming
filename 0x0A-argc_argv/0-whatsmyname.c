#include <stdlib.h>
#include <stdio.h>

/**
 * main -  a program that prints its name, followed by a new line.
 * @argc: counts no. of arguments.
 * @argv: an array of pointers to the strings which are those arguments.
 *
 * Return:  a value of 0 if true and a non - zero if false
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
