#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point
 * @void: no arg
 *
 * Description: Prints last digit
 *
 * Return: A value of 0
 */
int main(void)
{
	int n;
	int lg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */


	lg = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lg);
	}
	else if ((n < 6) && (n != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lg);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, lg);
	}
	return (0);
}
