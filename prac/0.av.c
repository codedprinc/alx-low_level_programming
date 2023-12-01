#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the arguments without using ac
 * @ac: no. of items in av
 * @av:  a NULL terminated array of strings.
 *
 * Return: 0.
 */

int main(int ac, char **av)
{
	int i;
        (void) ac;


	i = 1;

	while ( av[i] != NULL)
	{
		printf("%s\t\n", av[i]);
		i++;
	}
	printf("done\n");

	return (0);
}
