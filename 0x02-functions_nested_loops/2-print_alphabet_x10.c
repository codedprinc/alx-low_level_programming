#include "main.h"

/**
 * print_alphabet_x10 - alphabet x10
 * @void: no arg
 *
 * Return: Returns a value of 0
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char az;

	while (i <= 9)
	{
		az = 'a';

		while (az <= 'z')
		{
			_putchar(az);
			az++;
		}
		_putchar('\n');
		i++;
	}
}
