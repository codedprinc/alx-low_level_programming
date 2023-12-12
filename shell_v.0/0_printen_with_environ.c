#include "main.h"
/**
 * main - prints the environment using the global variable environ.
 * @void: no parameter.
 * Return: 0 if ok.
 */
int main (void)
{
	int i;
	i = 0;

	while (environ[i] != NULL)
	{
		printf("[%s] :: \n ", environ[i]);
		i++;
	}
	return(0);
}
