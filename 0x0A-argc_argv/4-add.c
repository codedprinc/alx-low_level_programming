#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - checks if a string represents a positive number
 * @str: the string to check
 *
 * Return: 1 if it's a positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
	while (*str)
	{
	if (!isdigit(*str))
	return (0);
	str++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: the number of command-line arguments
 * @argv: an array containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}
	for (i = 1; i < argc; i++)
	{
	if (!is_positive_number(argv[i]))
	{
	printf("Error\n");
	return (1);
	}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
