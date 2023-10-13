#include "main.h"
/**
 * _isalpha - return 1 when c is low or cap
 *
 * @c: collects the character
 *
 * Description: we are using _putchar
 *
 * Return: 1 if c is lower
 */
int _isalpha(int c)
{
	if (c <= 122 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
